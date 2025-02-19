#include <iostream>

using namespace std;

class Coxinha
{
public:
    string sabor;
    Coxinha(string saborNovo)
    {
        sabor = saborNovo;
    }
};

int main()
{
    string sabor;

    cout << "Digite o sabor da coxinha: ";
    cin >> sabor;

    Coxinha coxinha1(sabor);
    cout << "Coxinha 1 tem o sabor de " << coxinha1.sabor << "\n";

    return 0;
}
