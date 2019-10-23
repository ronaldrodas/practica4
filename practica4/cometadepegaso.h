#ifndef COMETADEPEGASO_H
#define COMETADEPEGASO_H
#include "comptecnicaespecial.h"
#include <iostream>

using namespace std;

class CometaDePegaso: public CompTecnicaEspecial
{
public:
    CometaDePegaso();
    ~CometaDePegaso();
    void tecnicaEspecial()const;
};

#endif // COMETADEPEGASO_H
