#include <iostream>

using namespace std;

class Cookie
{                   // Definição do "molde" para Cookies
public:             // Modificador de Acesso
    float preco;    // Atributo de Preço
    string sabor;   // Atributo de Sabor
    string formato; // Atributo de Formato

    // Método Construtor é inicializado quando a class é criada
    Cookie()
    {
        printf("Cookie criado \n");
        formato = "Redondo"; // Já inicializa o formato como redondo
    }
};

int main()
{
    Cookie cookie1;              // Cria um Objeto da classe cookie
    cookie1.preco = 15.35;       // Muda o preco do cookie1
    cookie1.sabor = "Chocolate"; // Muda o sabor do cookie1

    cout << "Cookie1:" << cookie1.sabor;
    cout << " custa R$" << cookie1.preco;
    cout << " formato:" << cookie1.formato << "\n";

    return 0;
}
