#ifndef MUDARBASE_H
#define MUDARBASE_H
#include "pilha.h"
using namespace Pedro;

class MudarBase
{
public:
    MudarBase();
    void converterBinario(int, Pilha&);
    void converterOctal(int, Pilha&);
    void converterHexa(int, Pilha&);
};

#endif // MUDARBASE_H
