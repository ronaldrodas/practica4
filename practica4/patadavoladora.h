#ifndef PATADAVOLADORA_H
#define PATADAVOLADORA_H
#include "compgolpepatada.h"
#include <iostream>

using namespace std;

class PatadaVoladora: public CompGolpePatada
{
public:
    PatadaVoladora();
    ~PatadaVoladora();
    void patada()const;
};

#endif // PATADAVOLADORA_H
