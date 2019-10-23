#ifndef KAMEHAMEHA_H
#define KAMEHAMEHA_H
#include "comppoder.h"
#include <iostream>

using namespace std;

class Kamehameha: public CompPoder
{
public:
    Kamehameha();
    ~Kamehameha();
    void poder()const;
};

#endif // KAMEHAMEHA_H
