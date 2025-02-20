#include <iostream>

using namespace std;

class FormaGeometrica
{
public:
    virtual int Area() = 0;

    void setLargura(int largura)
    {
        this->largura = largura;
    }

    void setAltura(int altura)
    {
        this->altura = altura;
    }

protected:
    int largura;
    int altura;
};

class Retangulo : public FormaGeometrica
{
public:
    int Area()
    {
        return (largura * altura);
    }
};

class Triangulo : public FormaGeometrica
{
public:
    int Area()
    {
        return (largura * altura) / 2;
    }
};

int main()
{
    Retangulo R;
    Triangulo T;

    R.setLargura(5);
    R.setAltura(10);

    T.setLargura(20);
    T.setAltura(8);

    cout << "Area do Retangulo: " << R.Area() << endl;
    cout << "Area do Triangulo: " << T.Area() << endl;

    return 0;
}
