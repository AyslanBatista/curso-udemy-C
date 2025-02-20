#include <iostream>
using namespace std;

class Usuario
{
private:
    string nome;
    string email;

public:
    string getNome()
    {
        return nome;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getEmail()
    {
        return email;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
};

class Personagem : public Usuario
{
private:
    int nivel;

public:
    int getNivel()
    {
        return nivel;
    }
    void setNivel(int nivel)
    {
        this->nivel = nivel;
    }
    void aumentaUmNivel()
    {
        nivel ++;
    }
};

int main()
{
    Personagem personagem1;
    personagem1.setNome("Ayslan");
    personagem1.setEmail("ayslan@email.com");
    personagem1.setNivel(5);

    cout << "Nome: " << personagem1.getNome() << " \n";
    cout << "Email: " << personagem1.getEmail() << " \n";
    cout << "Nivel: " << personagem1.getNivel() << " \n";


    cout << "Acabou de matar um MOB \n";
    cout << "+100 XP \n";
    personagem1.aumentaUmNivel();
    cout << "Nivel: " << personagem1.getNivel() << " \n";

    return 0;
}
