#include "mudarbase.h"

MudarBase::MudarBase()
{

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
