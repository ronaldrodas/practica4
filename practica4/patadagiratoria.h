#ifndef PATADAGIRATORIA_H
#define PATADAGIRATORIA_H
#include "compgolpepatada.h"
#include <iostream>

using namespace std;

class PatadaGiratoria: public CompGolpePatada
{
public:
    PatadaGiratoria();
    ~PatadaGiratoria();
    void patada()const;
};

#endif // PATADAGIRATORIA_H
