#include <iostream>
using namespace std;

// Bibliotecas necessários apra limpeza do buffer
#include <ios>
#include <limits>

int main()
{
    char frase[80]; // Cria uma variável para armazenar uma frase

    cout << "Digite uma frase;";

    // Quando vamos ler palavras e frases com o teclado
    // alguns compiladores se perdem com volares na memória
    // Para garantia seu funcionamento sem "lixo" no buffer
    cin.sync();

    // Lê a frase mesmo que tenha um espaço
    cin.getline(frase, 80);

    // Imprime o Resultado
    cout << "\nFrase:" << frase << "\n";

    // Lê de novo, após limpar o buffer
    cin.sync();
    cin.getline(frase, 80);
    cout << "\nNova Frase:" << frase << "\n";
    ;

    return 0;
}
