#include <iostream>
#include "goku.h"
#include "seiya.h"
#include "naruto.h"
#include "luchador.h"

using namespace std;

int main()
{
    Luchador *p1 = new Goku;
    p1->saludo();
    p1->ejecutarPatada();
    p1->ejecutarPoder();
    p1->ejecutarEspecial();
    cout<<endl;
    p1 = new Seiya;
    p1->saludo();
    p1->ejecutarPatada();
    p1->ejecutarPoder();
    p1->ejecutarEspecial();
    cout<<endl;
    p1 = new Naruto;
    p1->saludo();
    p1->ejecutarPatada();
    p1->ejecutarPoder();
    p1->ejecutarEspecial();
    delete p1;
    cout<<endl;

    return 0;
}
