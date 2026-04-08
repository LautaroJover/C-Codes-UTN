#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Creamos la Clase Material
class material {
protected:
    string titulo;
    string autor;
    int ano;
public:
    material(const string& t, const string& a, int ano): titulo(t), autor(a), ano(ano) {}

    virtual void mostrarinfo() const= 0;
    virtual string gettipo() const= 0;
};

//Creamos la Clase Libro con la Herencia Publica y Protegida de la Clase (Material)
class Libro: public material {
private:
    int cantidadPaginas;
public:
    Libro(const string& t, const string& a, int ano, int Paginas): material(t, a, ano), cantidadPaginas(Paginas) {}

    //usamos override para sobrescribir este metodo de la clase publica (Material)
    void mostrarinfo() const override {
        cout << "[Libro] Titulo: " << titulo
             << "   Autor:" << autor
             << "   ano:" << ano
             << "   Paginas" << cantidadPaginas << endl;
    }

    //Devolvemos la Clase Libro
    string gettipo() const override {return "Libro";}
};
//Creamos la Clase Revista con la Herencia Publica y Protegida de la Clase (Material)
class Revista: public material {
private:
    int numeroedicion;
public:
    Revista(const string& t, const string& a, int ano, int edicion): material(t, a, ano), numeroedicion(edicion) {}

    //usamos override para sobrescribir este metodo de la clase publica (Material)
    void mostrarinfo() const override {
        cout << "[Revista] Titulo: " << titulo
             << "   Autor:" << autor
             << "   ano:" << ano
             << "   Edicion:" << numeroedicion << endl;
    }

    //Devolvemos la Clase Libro
    string gettipo() const override {return "Revista";}
};
//Creamos la Clase Biblioteca que tendra todas las clases que creamos anteriormente
class Biblioteca
{
private:
    vector<material*>* materiales;
public:
    Biblioteca() { materiales = new vector <material*>(); }

    ~Biblioteca() {
        for (material* m : *materiales){
            delete m;
        }
        delete materiales;
    }

    void agregarmaterial(material* m) { materiales->push_back(m);}

    void listartodo() const {
        cout << "Lista de todos los Materiales:" << endl;
        for (const material* m: *materiales) {m->mostrarinfo();}
    }

    void listarportipo(const string& tipo) {
        cout << "Lista de Materiales por tipo: " << tipo << endl;
        for (const material* m: *materiales) {
            if (m->gettipo() == tipo) {m->mostrarinfo();}
        }
    }
};

int main() {
    Biblioteca* biblio = new Biblioteca();

    biblio->agregarmaterial(new Libro("Sangre Puro", "Gabriel Garcia Marquez", 1967, 417));
    biblio->agregarmaterial(new Libro("El nino de la luna", "Miguel de Cervantes", 1605, 863));
    biblio->agregarmaterial(new Libro("La Teoria Kim", "George Orwell", 1949, 328));

    biblio->agregarmaterial(new Revista("National Geographic", "Varios", 2023, 96));
    biblio->agregarmaterial(new Revista("Vogue", "Varios", 2025, 69));

    biblio->listartodo();
    cout << endl;
    biblio->listarportipo("Libro");
    cout << endl;
    biblio->listarportipo("Revista");

    delete biblio; // libera memoria
    return 0;
}


