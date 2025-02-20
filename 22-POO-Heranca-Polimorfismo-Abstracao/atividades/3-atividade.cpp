#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int cpf;

public:
    string getNome()
    {
        return nome;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    int getCpf()
    {
        return cpf;
    }
    void setCpf(int cpf)
    {
        this->cpf = cpf;
    }
};

class Professor : public Pessoa
{
private:
    float salario;

public:
    Professor()
    {
    }
    Professor(string nome, int cpf, float salario)
    {
        this->setNome(nome);
        this->setCpf(cpf);
        this->salario = salario;
    }
    float getSalario()
    {
        return salario;
    }
    void setSalario()
    {
        this->salario = salario;
    }
};

int main()
{
    Pessoa pessoa1;
    pessoa1.setNome("Testando Alvaro");
    pessoa1.setCpf(213543123);

    cout << "Nome: " << pessoa1.getNome() << " \n";
    cout << "CPF: " << pessoa1.getCpf() << " \n";

    Professor professor1("Alvaro Testando", 321312323, 233.22);
    cout << "Nome: " << professor1.getNome() << " \n";
    cout << "CPF: " << professor1.getCpf() << " \n";
    cout << "Salario: " << professor1.getSalario() << " \n";
}
