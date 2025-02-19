#include <iostream>

using namespace std;

class Pessoa
{
private:
    string nome;

public:
    Pessoa(string nomeNovo)
    {
        nome = nomeNovo;
    }

    string getNome()
    {
        return nome;
    }

    void setNome(string nomeNovo)
    {
        nome = nomeNovo;
    }
};

int main()
{
    Pessoa pessoa1("John");
    cout << pessoa1.getNome() << "\n";
    pessoa1.setNome("Patrick");
    cout << pessoa1.getNome() << "\n";
    return 0;
}
