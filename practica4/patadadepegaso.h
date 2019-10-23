#ifndef PATADADEPEGASO_H
#define PATADADEPEGASO_H
#include "compgolpepatada.h"
#include <iostream>

using namespace std;

class PatadaDePegaso: public CompGolpePatada
{
public:
    PatadaDePegaso();
    ~PatadaDePegaso();
    void patada()const;
};

#endif // PATADADEPEGASO_H
