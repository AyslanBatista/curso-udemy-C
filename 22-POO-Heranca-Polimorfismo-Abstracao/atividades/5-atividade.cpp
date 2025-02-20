#include <iostream>
using namespace std;

class Idioma
{
public:
    void saudar() {}
};

class Portugues : public Idioma
{
public:
    void saudar()
    {
        cout << "Ola";
    }
};

class Ingles : public Idioma
{
public:
    void saudar()
    {
        cout << "Hi";
    }
};

class Italiano : public Idioma
{
public:
    void saudar()
    {
        cout << "Ciao";
    }
};

int main()
{
    Portugues portugues1;
    portugues1.saudar();

    Ingles ingles1;
    ingles1.saudar();

    Italiano italiano1;
    italiano1.saudar();
}
