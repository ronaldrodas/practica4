#ifndef NARUTO_H
#define NARUTO_H
#include "luchador.h"
#include <iostream>
#include "rasengan.h"
#include "patadagiratoria.h"
#include "clonesdesombra.h"

using namespace std;

class Naruto: public Luchador
{
public:
    Naruto();
    ~Naruto();
    void saludo()const;
};

#endif // NARUTO_H
