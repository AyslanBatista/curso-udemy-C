#include <iostream>
#include <ios>
#include <limits>

using namespace std;

class Cookie
{                 // Definição do "molde" para Cookies
public:           // Modificador de Acesso
    float preco;  // Atributo de Preço
    string sabor; // Atributo de Sabor
};

int main()
{
    Cookie cookie1; // Cria um Objeto da classe cookie

    cout << "Digite o preco do cookie:";
    cin >> cookie1.preco;

    cout << "Digite o sabor do cookie:";

    // Limpa o Buffer
    cin.sync();

    // Lê o sabor mesmo que tenha espaços
    getline(cin, cookie1.sabor);

    cout << "\nCookie1:" << cookie1.sabor;
    cout << " curta R$" << cookie1.preco;

    return 0;
}
