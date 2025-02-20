#include <iostream>
using namespace std;

// Classe pai
class Eletronico
{
private:
    string marca;

public:
    string getMarca()
    {
        return marca;
    }
    void setMarca(string marca)
    {
        this->marca = marca;
    }

protected:
    void souEletronico()
    {
        printf("\nSou eletronico!\n");
    }
};

// Classe Filha
class Celular : public Eletronico
{
    // Como está extendendo a classe Eletronico
    // Automaticamente temos acesso aos métodos e atributos
    // que forem PUBLIC dela, como getMarca() e setMarca()

private:
    int polegadas;

public:
    Celular()
    {
        void souEletronico();
    }
    int getPolegadas()
    {
        return polegadas;
    }

    // Setter da marca, atualiza a marca
    void setPolegadas(int polegadas)
    {
        this->polegadas = polegadas;
    }
};

int main()
{
    Eletronico eletronico1;
    eletronico1.setMarca("Samsung");
    cout << "Eletronico1 Marca:" << eletronico1.getMarca(); // Imprime a marca
    // Não consigo usar os métodos getPolegadas() ou setPolegadas() aqui
    // Pois esses métodos estão presentes APENAS na classe filha

    Celular celular1;
    celular1.setMarca("Iphone");
    celular1.setPolegadas(5);
    cout << "Cel1 Marca:" << celular1.getMarca() << "\n";         // Imprime a marca
    cout << "Cel1 Polegadas:" << celular1.getPolegadas() << "\n"; // Imprime as Polegadas
}
