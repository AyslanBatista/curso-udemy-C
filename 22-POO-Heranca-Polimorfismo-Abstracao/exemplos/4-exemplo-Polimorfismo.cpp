#include<iostream>
using namespace std;

class Animal{
    public:
        void emitirSom(){}
};
class Cachorro: public Animal{
    public:
        void emitirSom(){
            cout << "Au au";
        }
};
class Gato: public Animal {
    public:
        void emitirSom(){
            cout << "Miau Miau";
        }
};

int main()
{
    Cachorro cachorro1;
    cachorro1.emitirSom();

    Gato gato1;
    gato1.emitirSom();

    return 0;
}
