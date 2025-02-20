#include <iostream>

using namespace std;

class Funcionario
{
    public:
        virtual void ImprimirFuncoes() = 0;
};

class Promotor: public Funcionario
{
    public:
        void ImprimirFuncoes(){
            cout << "Funcoes Promotor" << endl;
        }
};

class Caixa: public Funcionario{
    public:
        void ImprimirFuncoes(){
            cout << "Funcoes Caixa" << endl;
        }
};

int main()
{
    Promotor promotor1;
    Caixa caixa1;

    promotor1.ImprimirFuncoes();
    caixa1.ImprimirFuncoes();

    return 0;
}
