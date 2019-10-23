#ifndef RASENGAN_H
#define RASENGAN_H
#include "comptecnicaespecial.h"
#include <iostream>

using namespace std;

class Rasengan: public CompTecnicaEspecial
{
public:
    Rasengan();
    ~Rasengan();
    void tecnicaEspecial()const;
};

#endif // RASENGAN_H
