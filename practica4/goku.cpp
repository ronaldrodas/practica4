#include "goku.h"

Goku::Goku()
{
    ptr = new Genkidama;
    ptr2 = new PatadaVoladora;
    ptr3 = new Kamehameha;
}

Goku::~Goku()
{
    delete ptr;
    delete ptr2;
    delete ptr3;
}

void Goku::saludo()const
{
    cout<<"Hola soy Goku"<<endl;
}
