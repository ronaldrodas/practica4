#ifndef GENKIDAMA_H
#define GENKIDAMA_H
#include "comptecnicaespecial.h"
#include <iostream>

using namespace std;

class Genkidama: public CompTecnicaEspecial
{
public:
    Genkidama();
    ~Genkidama();
    void tecnicaEspecial()const;
};

#endif // GENKIDAMA_H
