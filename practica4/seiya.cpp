#include "seiya.h"

Seiya::Seiya()
{
    ptr = new CometaDePegaso;
    ptr2 = new PatadaDePegaso;
    ptr3 = new MeteorosDePegaso;
}

Seiya::~Seiya()
{
    delete ptr;
    delete ptr2;
    delete ptr3;
}

void Seiya::saludo() const
{
   cout<<"Soy pegaso caballero de athenea"<<endl;
}

