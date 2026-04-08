#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Empleado
{
protected:
    string nombre;
    int id;
    double salarioBase;

public:
    Empleado(const string& n, int i, double sb) : nombre(n), id(i), salarioBase(sb) {}

    virtual ~Empleado() {}

    virtual double calcularSalario () const
    {
        return salarioBase;
    }

    virtual void mostrarInfo() const
    {
        cout << "Empleado:" << nombre
             << " |ID: " << id
             << " |Salario Base: " << salarioBase << endl;
    }
};

class EmpleadoPermanente : public Empleado
{
private:
    double bonoAnual;
public:
    EmpleadoPermanente (const string& n, int i, double sb, double bono) : Empleado(n, i, sb), bonoAnual(bono) {}

    double calcularSalario () const override
    {
        return salarioBase + (bonoAnual / 12.0);
    }

    void mostrarInfo () const override
    {
        cout << "Empleado Permanente: " << nombre
             << " |ID: " << id
             << " |SalarioBase: " << salarioBase
             << " |Bono Anual: " << bonoAnual
             << " |Salario Mensual: " << calcularSalario() << endl;
    }
};

class EmpleadoContratado : public Empleado
{
private:
    int horasTrabajadas;
    double tarifaxhora;

public:
    EmpleadoContratado(const string& n, int i, double sb, int horas, double tarifa) : Empleado(n, i, sb), horasTrabajadas(horas), tarifaxhora(tarifa) {}

    double calcularSalario() const override
    {
        return horasTrabajadas * tarifaxhora;
    }

    void mostrarInfo () const override
    {
        cout << "Empleado Contratado: " << nombre
             << " |ID: " << id
             << " |Hora: " << horasTrabajadas
             << " |Tarifa: " << tarifaxhora
             << " |Salario Mensual: " << calcularSalario() << endl;
    }
};

class Departamento
{
private:
    string nombre;
    vector <Empleado*> empleados;
public:
    Departamento(const string& n) : nombre(n) {}

    void agregarEmpleado (Empleado* e)
    {
        empleados.push_back(e);
    }

    double calcularNominaTotal() const
    {
        double total = 0.0;
        for (const auto& e : empleados)
        {
            total += e->calcularSalario();
        }
        return total;
    }

    void listarEmpleados () const
    {
        cout << "\nEmpleados del Departamento: " << nombre << "\n";
        for (const auto& e: empleados)
        {
            e->mostrarInfo();
        }
    }

    int cantidadEmpleados() const
    {
        return empleados.size();
    }

    ~Departamento()
    {
        for (auto e: empleados)
        {
            delete e;
        }
    }

    string getNombre() const
    {
        return nombre;
    }
};

class Empresa
{
private:
    string nombre;
    vector<Departamento*> departamentos;
public:
    Empresa(const string& n) : nombre(n) {}

    void agregarDepartamento(Departamento* d)
    {
        departamentos.push_back(d);
    }

    double nominaTotal() const
    {
        double total= 0.0;
        for(const auto& d: departamentos)
        {
            total += d->calcularNominaTotal();
        }
        return total;
    }

    void mostrarResumen() const
    {
        cout << "Resumen de la Empresa: " << nombre << endl;

        for (const auto& d : departamentos)
        {
            cout << "\n|Departamento: " << d->getNombre()
                 << " |Empleados: " << d->cantidadEmpleados()
                 << " |Nomina Total: $" << d->calcularNominaTotal() << endl;
            d->listarEmpleados();
        }
        cout << "\nNomina Total de la Empresa: $" << nominaTotal() << endl;
    }

    ~Empresa()
    {
        for(auto d : departamentos)
        {
            delete d;
        }
    }
};

int main() {
    // Crear empresa
    Empresa empresa("TechSolutions");

    // Crear departamentos
    Departamento* d1 = new Departamento("Desarrollo");
    Departamento* d2 = new Departamento("Recursos Humanos");

    // Agregar empleados al departamento 1
    d1->agregarEmpleado(new EmpleadoPermanente("Tony Stark", 3000, 100000, 50000));
    d1->agregarEmpleado(new EmpleadoContratado("Peter Parker", 616, 0, 180, 250));
    d1->agregarEmpleado(new EmpleadoPermanente("Bruce Banner",  1811, 90000, 30000));

    // Agregar empleados al departamento 2
    d2->agregarEmpleado(new EmpleadoContratado("Natasha Romanoff", 007, 0, 160, 400));
    d2->agregarEmpleado(new EmpleadoPermanente("Steve Rogers", 1941, 85000, 20000));
    d2->agregarEmpleado(new EmpleadoContratado("Thor Odinson", 777, 0, 150, 350));

    // Agregar departamentos a la empresa
    empresa.agregarDepartamento(d1);
    empresa.agregarDepartamento(d2);

    // Mostrar resumen completo
    empresa.mostrarResumen();

    // Al salir del main se llama al destructor de empresa,
    // que elimina departamentos y empleados correctamente.
    return 0;
}
