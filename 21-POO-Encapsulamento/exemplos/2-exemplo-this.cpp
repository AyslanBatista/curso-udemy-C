#include <iostream>
using namespace std;

class Salgadinho
{
private:
    string sabor;

public:
    Salgadinho(string sabor)
    {
        setSabor(sabor);
    }

    string getSabor()
    {
        return sabor;
    }

    void setSabor(string sabor)
    {
        // Atributo da classe recebe o valor do parâmetro
        this->sabor = sabor;
    }
};

int main()
{
    Salgadinho s("Picante");
    cout << "Salgadinho1 sabor:" << s.getSabor() << "\n"; // Imprime o sabor

    return 0;
}
