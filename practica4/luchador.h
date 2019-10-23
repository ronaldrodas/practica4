#ifndef LUCHADOR_H
#define LUCHADOR_H
#include "comppoder.h"
#include "comptecnicaespecial.h"
#include "compgolpepatada.h"

class Luchador
{protected:
   CompTecnicaEspecial *ptr=nullptr;
   CompGolpePatada *ptr2=nullptr;
   CompPoder *ptr3=nullptr;

public:
    Luchador();
    virtual ~Luchador();
    virtual void saludo()const= 0;
    void ejecutarEspecial();
    void ejecutarPatada();
    void ejecutarPoder();

};

#endif // LUCHADOR_H
