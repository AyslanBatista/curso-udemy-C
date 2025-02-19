#include <iostream>

using namespace std;

class Cachorro
{
public:
    string raca;
    Cachorro()
    {
        raca = "Viralatinha";
    }
    Cachorro(string novaRaca){
        raca = novaRaca;
    }
};

int main() {

    string raca;

    cout << "Digite a raca do dog: ";
    cin >> raca;

    Cachorro cachorro1(raca);
    cout << "Cachorro da raca: " << cachorro1.raca << "\n";

    Cachorro cachorro2;
    cout << "Cachorro sem raca: " << cachorro2.raca << "\n";

    return 0;
}
