#ifndef GOKU_H
#define GOKU_H
#include "luchador.h"
#include <iostream>
#include "genkidama.h"
#include "patadavoladora.h"
#include "kamehameha.h"


using namespace std;

class Goku: public Luchador
{
public:
    Goku();
    ~Goku();
    void saludo()const;
};

#endif // GOKU_H
