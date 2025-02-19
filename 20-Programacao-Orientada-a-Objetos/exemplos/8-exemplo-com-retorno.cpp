#include <iostream>
using namespace std;

class Calculadora
{
public:
    Calculadora()
    {
        printf("Calculadora Criada \n");
    }

    // Metodo que faz uma soma
    int soma(int x, int y)
    {
        int resultado = x + y;
        return resultado;
    }
};

int main()
{
    Calculadora minhaCalculadora;
    cout << minhaCalculadora.soma(10, 5);

    return 0;
}
