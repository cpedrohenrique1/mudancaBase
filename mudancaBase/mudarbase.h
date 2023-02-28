#ifndef MUDARBASE_H
#define MUDARBASE_H
#include "pilha.h"
using namespace Pedro;

class MudarBase
{
private:
    Pilha p;
    int numero;
    int base;
public:
    MudarBase(int numero, int base);
    QString calcularMudancaBase();
};

#endif // MUDARBASE_H
