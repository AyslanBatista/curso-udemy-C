#include <iostream>

using namespace std;

class Pessoa
{
public:
    string nome;

    Pessoa(string nomeNovo)
    {
        printf("pessoa criada com nome \n");
        nome = nomeNovo;
    }

    void fala(string frase)
    {
        cout << nome << " diz: " << frase;
    }

    void grita()
    {
        cout << "AAAAAAH";
    }
};

int main()
{
    Pessoa pessoa1("Mario");
    pessoa1.fala("E ai galera!");
    pessoa1.grita();
    return 0;
}
