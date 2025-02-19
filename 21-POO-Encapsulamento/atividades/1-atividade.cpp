#include <iostream>

using namespace std;

class Celular
{
private:
    string marca;
    float preco;

public:
    Celular()
    {
        marca = "";
        preco = 0;
    }

    Celular(string marca)
    {
        setMarca(marca);
    }
    Celular(float preco)
    {
        setPreco(preco);
    }

    Celular(string marca, float preco)
    {
        setMarca(marca);
        setPreco(preco);
    }

    string getMarca()
    {
        return marca;
    }
    float getPreco()
    {
        return preco;
    }

    void setMarca(string marcaNovo)
    {
        marca = marcaNovo;
    }

    void setPreco(float precoNovo)
    {
        preco = precoNovo;
    }
};

int main()
{

    Celular celular1("Nokia-Tijolao", 10.00);
    cout << celular1.getMarca() << " \n";
    cout << celular1.getPreco() << " \n";

    celular1.setMarca("Nokia-Concreto");
    cout << celular1.getMarca() << " \n";

    celular1.setPreco(10.99);
    cout << celular1.getPreco() << " \n";

    return 0;
}
