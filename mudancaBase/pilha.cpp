#include "pilha.h"
using namespace Pedro;

Pilha::Pilha(){
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
    return (topo == (tamanho-1));
}

void Pilha::empilhar(int valor){
    if (pilhaCheia()){
        throw QString("chegou ao topo da pilha");
    }
    topo++;
    vet[topo] = valor;
}

int Pilha::desempilhar(){
    if (pilhaVazia()){
        throw QString("Pilha ja esta vazia");
    }
    return vet[topo--];
}

int Pilha::acessar()const{
    if (pilhaVazia()){
        throw QString("nao foi possivel acessar, pilha vazia");
    }
    return vet[topo];
}

Pilha::~Pilha(){
    if (vet){
        delete[] vet;
        vet = nullptr;
    }
}
