#include <iostream>
using namespace std;

class Calculadora
{
public:
    void somar(int x, int y, int z)
    {
        int resultado = x + y + z;
        cout << "Total: " << resultado << " \n";
    }
    void somar(int a, int b)
    {
        int resultado = a + b;
        cout << "Total: " << resultado << " \n";
    }
};

int main()
{
    Calculadora calc;
    calc.somar(2, 3);
    calc.somar(2, 3, 4);
    calc.somar(5, 6, 1);
    calc.somar(7, 2);

    return 0;
}
