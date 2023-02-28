#include "mudarbase.h"

MudarBase::MudarBase(int numero, int base):
    p(6),
    numero(0),
    base(0)
{
    this->numero = numero;
    this->base = base;
}

QString MudarBase::calcularMudancaBase(){
    QString vetor = "0123456789ABCDEF";
    int resto;
    QString resultado = "";
    while(numero > 0){
        resto = numero % base;
        numero = numero / base;
        p.empilhar(resto);
    }
    while (!p.pilhaVazia()) {
        resultado += vetor[p.desempilhar()];
    }
    return resultado;
    throw QString("nao foi possivel calcular mudanca de base");
}
