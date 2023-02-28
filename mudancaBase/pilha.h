#ifndef PILHA_H
#define PILHA_H
#include <QString>

namespace Pedro{
    class Pilha
    {
    private:
        int *vet;
        int tamanho;
        int topo;
    public:
        Pilha();
        Pilha(int);
        ~Pilha();
        bool pilhaVazia()const;
        bool pilhaCheia()const;
        void empilhar(int);
        int desempilhar();
        int acessar()const;
    };
}


#endif // PILHA_H
