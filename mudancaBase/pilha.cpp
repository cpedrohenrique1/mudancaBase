#include "pilha.h"
using namespace Pedro;

Pilha::Pilha()
{

}

Pilha::Pilha(int tamanho):
    vet(0),
    tamanho(0),
    topo(-1)
{
    if (tamanho <= 0)
        throw QString("Tamanho de memoria invalido");
    try {
        vet = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &erro) {
        throw QString("Memoria nao alocada");
    }
}

bool Pilha::pilhaVazia()const{
    return (topo==-1);
}

bool Pilha::pilhaCheia()const{
    return (topo == tamanho-1);
}

Pilha::~Pilha(){
    if (vet){
        delete[] vet;
        vet = nullptr;
    }
}

void Pilha::empilhar(int valor){
    if (topo < tamanho){
        topo++;
        vet[topo] = valor;
    }else{
        throw QString("Topo maior que o tamanho do vetor");
    }
}

int Pilha::desempilhar(){
    return vet[topo--];
}

int Pilha::getTopo()const{
    return topo;
}
