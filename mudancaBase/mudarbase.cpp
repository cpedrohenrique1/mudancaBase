#include "mudarbase.h"
namespace Pedro{
MudarBase::MudarBase(int numero, int base):
    numero(0),
    base(0)
{
    this->numero = numero;
    this->base = base;
}

QString MudarBase::calcularMudancaBase()const{
    Pilha p(100);
    QString vetor = "0123456789ABCDEF";
    int resto;
    QString resultado = "o numero da base 10: " + QString::number(numero) + '\n';
    resultado += "convertido na base " + QString::number(base) + " eh: ";
    int aux = numero;
    while(aux > 0){
        resto = aux % base;
        aux = aux / base;
        p.empilhar(resto);
    }
    while (!p.pilhaVazia()) {
        resultado += vetor[p.desempilhar()];
    }
    return resultado;
}

}
