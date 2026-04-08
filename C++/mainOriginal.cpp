#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Punto {
private:
    double x, y;
public:
    Punto(double x= 0.0, double y= 0.0) : x(x), y(y) {}

    double getx() const {return x;}
    double gety() const {return y;}

    double distancia(const Punto& otro) const {
        double dx = x - otro.x;
        double dy = y - otro.y;
        //devolvemos raiz cuadrada
        return sqrt(dx * dx + dy * dy);
    }
};
class Figura {
public:
    virtual double calculararea() const = 0;
    virtual double calcularperimetro() const = 0;
    virtual void mostrar() const = 0;
    virtual ~Figura() {}
};
class Circulo : public Figura {
private:
    Punto centro;
    double radio;
public:
    Circulo(const Punto& c, double r) : centro(c), radio(r) {}

    double calculararea() const override {
        return M_PI * radio * radio;
    }
    double calcularperimetro() const override {
        return 2* M_PI * radio;
    }
    void mostrar() const override {
        cout << "Circulo con centro en: "
             << centro.getx() << ", " << centro.gety()
             << " y radio en: " << radio << endl;
    }
};
class Rectangulo : public Figura {
private:
    Punto esquinaSuperiorIzq;
    double ancho, alto;
public:
    Rectangulo(const Punto& p, double a, double h) : esquinaSuperiorIzq(p), ancho(a), alto(h) {}

    double calculararea () const override {
        return ancho * alto;
    }
    double calcularperimetro () const override {
        return 2* (ancho + alto);
    }
    void mostrar() const override {
        cout << "Rectangulo en: " << esquinaSuperiorIzq.getx() << ", " << esquinaSuperiorIzq.gety() << "  ancho: " << ancho << ", alto: " << alto << endl;
    }
};
class Triangulo : public Figura {
private:
    Punto p1, p2, p3;
public:
    Triangulo(const Punto& a, const Punto& b, const Punto& c) : p1(a), p2(b), p3(c) {}

    double calculararea() const override {
        double a = p1.distancia(p2);
        double b = p2.distancia(p3);
        double c = p3.distancia(p1);
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double calcularperimetro() const override {
        return p1.distancia(p2) + p2.distancia(p3) + p3.distancia(p1);
    }
    void mostrar() const override {
        cout << "Triangulo con vertices en: " << p1.getx() << ", " << p1.gety()
             << " , " << p2.getx() << " , " << p2.gety() << " , " << p3.getx() << " , " << p3.gety() << " " << endl;
    }
};

class Dibujo {
private:
    vector<Figura*> figuras;
public:
    void agregarFigura(Figura* f) {
        figuras.push_back(f);
    }
    double areatotal() const{
        double total = 0.0;
        for (const auto& f : figuras) {
            total += f->calculararea();
        }
    return total;
    }
    void mostrartodas() const {
        for (const auto& f : figuras) {
            f-> mostrar ();
            cout << "Area : " << f->calculararea()
                 << ", Perimetro : " << f->calcularperimetro() << endl;
            }
        }
    ~Dibujo () {
        for (auto f : figuras) {
            delete f;
        }
    }
};

int main() {
    Dibujo dibujo;

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

    return 0;
}
