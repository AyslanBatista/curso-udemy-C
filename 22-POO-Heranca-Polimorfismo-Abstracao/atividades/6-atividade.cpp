#include <iostream>
using namespace std;

class Menu
{
public:
    void mostraopcoes() {}
};

class MenuCliente : public Menu
{
    public:
        void mostraopcoes(){
            cout << "Menu para Cliente";
        }
};
class MenuAdministrador : public Menu
{
    public:
        void mostraopcoes(){
            cout << "Menu para Adminsitrador";
        }
};

int main()
{
    MenuCliente menucliente1;
    menucliente1.mostraopcoes();

    MenuAdministrador menuadministrador1;
    menuadministrador1.mostraopcoes();
}

