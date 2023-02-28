#include "mudarbase.h"

MudarBase::MudarBase(int numero, int base):
    numero(0),
    base(0)
{
    this->numero = numero;
    this->base = base;
}

QString MudarBase::calcularMudancaBase(){
    int resto;
    switch(base){
    case 2:
        while (numero!=0){
            resto = numero % 2;
            p.empilhar(resto);
            numero /= 2;
        }

        break;
    case 8:
        while(numero!=0){
            resto = numero % 8;
            p.empilhar(resto);
            numero /= 8;
        }

        break;
    case 16:
        while (numero!=0){
            resto = numero % 16;
            switch (resto){
            case 10:
                resto = 'A';
                break;
            case 11:
                resto = 'B';
                break;
            case 12:
                resto = 'C';
                break;
            case 13:
                resto = 'D';
                break;
            case 14:
                resto = 'E';
                break;
            case 15:
                resto = 'F';
                break;
            }
            p.empilhar(resto);
            numero /= 16;
        }

        break;
    }
}

void MudarBase::converterBinario(int num, Pilha &pilha){
    int resto;
    while (num!=0){
        resto = num % 2;
        pilha.empilhar(resto);
        num /= 2;
    }
}

void MudarBase::converterOctal(int num, Pilha &pilha){
    int resto;
    while(num!=0){
        resto = num % 8;
        pilha.empilhar(resto);
        num /= 8;
    }
}

void MudarBase::converterHexa(int num, Pilha &pilha){
    QString str = "0123456789ABCDEF";
    int resto;
    while (num!=0){
        resto = num % 16;
        switch (resto){
        case 10:
            resto = 'A';
            break;
        case 11:
            resto = 'B';
            break;
        case 12:
            resto = 'C';
            break;
        case 13:
            resto = 'D';
            break;
        case 14:
            resto = 'E';
            break;
        case 15:
            resto = 'F';
            break;
        }
        pilha.empilhar(resto);
        num /= 16;
    }
}
