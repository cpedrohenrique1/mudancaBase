#ifndef MUDARBASE_H
#define MUDARBASE_H
#include "pilha.h"

namespace Pedro{
class MudarBase
{
private:
    int numero;
    int base;
public:
    MudarBase(int numero, int base);
    QString calcularMudancaBase()const;
};
}
#endif // MUDARBASE_H
