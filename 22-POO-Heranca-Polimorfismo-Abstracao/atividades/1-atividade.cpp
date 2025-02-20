#include <iostream>
using namespace std;

class Animal
{
private:
    string terreno;

public:
    string getTerreno()
    {
        return terreno;
    }
    void setTerreno(string terreno)
    {
        this->terreno = terreno;
    }
};

class Mamifero : public Animal
{

private:
    int mesesGestacao;

public:
    int getMesesgestacao()
    {
        return mesesGestacao;
    }
    void setMesesgestacao(int mesesGestacao)
    {
        this->mesesGestacao = mesesGestacao;
    }
};

class Cachorro : public Mamifero
{
private:
    string raca;

public:
    string getRaca()
    {
        return raca;
    }
    void setRaca(string raca)
    {
        this->raca = raca;
    }
    string latir()
    {
        return "AUUUUUUU";
    }
};

int main()
{
    Cachorro cachorro1;
    cachorro1.setTerreno("Arenoso");
    cachorro1.setMesesgestacao(5);
    cachorro1.setRaca("Vira-Lata");

    cout << "Terreno: " << cachorro1.getTerreno() << "\n";
    cout << "Meses de Gestação: " << cachorro1.getMesesgestacao() << "\n";
    cout << "Raça: " << cachorro1.getRaca() << "\n" ;
    cout << cachorro1.latir();
}
