#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Punto {
private:
    double x, y;
public:
    //Constructor (con valores por defecto 0.0)
    Punto(double x= 0.0, double y= 0.0) : x(x), y(y) {}

    double getx() const {return x;}
    double gety() const {return y;}

    double distancia(const Punto& otro) const {
        double dx = x - otro.x;
        double dy = y - otro.y;
        // usamos sqrt (raíz cuadrada)
        return sqrt(dx * dx + dy * dy);
    }
};

class Figura {
public:
    // Destructor virtual (asegura que al borrar un puntero a Figura
    // se llame al destructor correcto en clases derivadas)
    virtual ~Figura() {}

    // Métodos virtuales puros → hacen que Figura sea clase abstracta
    virtual double calculararea() const = 0;
    virtual double calcularperimetro() const = 0;
    virtual void mostrar() const = 0;
};

class Circulo : public Figura {
private:
    Punto centro;
    double radio;
public:
    //Constructor
    Circulo(const Punto& c, double r) : centro(c), radio(r) {}

    double calculararea() const override {
        return M_PI * radio * radio;
    }
    double calcularperimetro() const override {
        return 2* M_PI * radio;
    }
    void mostrar() const override {
        cout << "\nCirculo con centro en: "
             << centro.getx() << ", " << centro.gety()
             << " y radio en: " << radio << endl;
    }
};

class Rectangulo : public Figura {
private:
    Punto esquinaSuperiorIzq;
    double ancho, alto;
public:
    // 🔹 Constructor
    Rectangulo(const Punto& p, double a, double h)
        : esquinaSuperiorIzq(p), ancho(a), alto(h) {}

    double calculararea () const override {
        return ancho * alto;
    }
    double calcularperimetro () const override {
        return 2* (ancho + alto);
    }
    void mostrar() const override {
        cout << "\nRectangulo en: "
             << esquinaSuperiorIzq.getx() << ", " << esquinaSuperiorIzq.gety()
             << "  ancho: " << ancho << ", alto: " << alto << endl;
    }
};

class Triangulo : public Figura {
private:
    Punto p1, p2, p3;
public:
    //Constructor
    Triangulo(const Punto& a, const Punto& b, const Punto& c)
        : p1(a), p2(b), p3(c) {}

    double calculararea() const override {
        double a = p1.distancia(p2);
        double b = p2.distancia(p3);
        double c = p3.distancia(p1);
        double s = (a + b + c) / 2.0;  // semiperimetro
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Fórmula de Heron
    }
    double calcularperimetro() const override {
        return p1.distancia(p2) + p2.distancia(p3) + p3.distancia(p1);
    }
    void mostrar() const override {
        cout << "\nTriangulo con vertices en: "
             << p1.getx() << ", " << p1.gety()
             << " , " << p2.getx() << " , " << p2.gety()
             << " , " << p3.getx() << " , " << p3.gety() << endl;
    }
};

class Dibujo {
private:
    vector<Figura*> figuras;
public:
    // Agregar figuras dinámicas al vector
    void agregarFigura(Figura* f) {
        figuras.push_back(f);
    }

    double areatotal() const {
        double total = 0.0;
        for (const auto& f : figuras) {
            total += f->calculararea();
        }
        return total;
    }

    void mostrartodas() const {
        for (const auto& f : figuras) {
            f->mostrar();
            cout << "Area : " << f->calculararea()
                 << ", Perimetro : " << f->calcularperimetro() << endl;
        }
    }

    //Destructor (libera memoria de todas las figuras creadas con new)
    ~Dibujo () {
        for (auto f : figuras) {
            delete f;
        }
    }
};

int main() {
    Dibujo dibujo;

    // Se llaman a los constructores de cada figura al hacer new

    // Agregar 2 círculos
    dibujo.agregarFigura(new Circulo(Punto(0,0), 5));
    dibujo.agregarFigura(new Circulo(Punto(2,3), 3));

    // Agregar 2 rectángulos
    dibujo.agregarFigura(new Rectangulo(Punto(0,0), 4, 6));
    dibujo.agregarFigura(new Rectangulo(Punto(1,1), 2, 3));

    // Agregar 2 triángulos
    dibujo.agregarFigura(new Triangulo(Punto(0,0), Punto(4,0), Punto(0,3)));
    dibujo.agregarFigura(new Triangulo(Punto(1,1), Punto(3,1), Punto(2,4)));

    // Mostrar todo
    dibujo.mostrartodas();
    cout << "\nArea total del dibujo = " << dibujo.areatotal() << endl;

    //    Cuando termina main:
    //  - se ejecuta el destructor de Dibujo (~Dibujo)
    //  - este libera la memoria de todas las figuras con delete
    return 0;
}
