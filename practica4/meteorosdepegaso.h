#ifndef METEOROSDEPEGASO_H
#define METEOROSDEPEGASO_H
#include "comppoder.h"
#include <iostream>

using namespace std;

class MeteorosDePegaso: public CompPoder
{
public:
    MeteorosDePegaso();
    ~MeteorosDePegaso();
    void poder()const;
};

#endif // METEOROSDEPEGASO_H
