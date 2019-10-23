#include "luchador.h"

Luchador::Luchador()
{

}

Luchador::~Luchador()
{

}

void Luchador::saludo() const
{

}

void Luchador::ejecutarEspecial()
{
    ptr->tecnicaEspecial();
}

void Luchador::ejecutarPatada()
{
    ptr2->patada();
}

void Luchador::ejecutarPoder()
{
    ptr3->poder();
}
