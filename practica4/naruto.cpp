#include "naruto.h"

Naruto::Naruto()
{
    ptr = new Rasengan;
    ptr2 = new PatadaGiratoria;
    ptr3 = new ClonesDeSombra;
}

Naruto::~Naruto()
{
    delete ptr;
    delete ptr2;
    delete ptr3;
}

void Naruto::saludo()const
{
    cout<<"Hola soy naruto de la aldea de la hoja"<<endl;
}

