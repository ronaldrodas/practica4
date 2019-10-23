#ifndef SEIYA_H
#define SEIYA_H
#include "luchador.h"
#include <iostream>
#include "cometadepegaso.h"
#include "patadadepegaso.h"
#include "meteorosdepegaso.h"

using namespace std;

class Seiya: public Luchador
{
public:
    Seiya();
    ~Seiya();
    void saludo()const;
};

#endif // SEIYA_H
