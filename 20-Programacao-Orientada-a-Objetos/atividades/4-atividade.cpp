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
    int subtrcao(int x, int y)
    {
        int resultado = x - y;
        return resultado;
    }
    int multiplicacao(int x, int y)
    {
        int resultado = x * y;
        return resultado;
    }
    float divisao(int x, int y)
    {
        float resultado = x / y;
        return resultado;
    }
};

int main()
{
    Calculadora minhaCalculadora;
    cout << "\n ---------SOMA----------- \n";
    cout << " \n" << minhaCalculadora.soma(10, 5);
    cout << " \n" << minhaCalculadora.soma(272, 321);
    cout << " \n" << minhaCalculadora.soma(40, 60);
    cout << " \n" << minhaCalculadora.soma(-3, 13);

    cout << "\n ---------SUBTRACAO----------- \n";
    cout << " \n" << minhaCalculadora.subtrcao(80, 53);
    cout << " \n" << minhaCalculadora.subtrcao(312, 87);
    cout << " \n" << minhaCalculadora.subtrcao(76, 34);
    cout << " \n" << minhaCalculadora.subtrcao(35, 45);

    cout << "\n ---------MULTIPLICACAO----------- \n";
    cout << " \n" << minhaCalculadora.multiplicacao(8, 3);
    cout << " \n" << minhaCalculadora.multiplicacao(7, 7);
    cout << " \n" << minhaCalculadora.multiplicacao(4, 7);
    cout << " \n" << minhaCalculadora.multiplicacao(3, 100);


    cout << "\n ---------DIVISAO----------- \n";
    cout << " \n" << minhaCalculadora.divisao(80, 8);
    cout << " \n" << minhaCalculadora.divisao(32, 4);
    cout << " \n" << minhaCalculadora.divisao(240, 2);
    cout << " \n" << minhaCalculadora.divisao(63, 3);

    return 0;
}
