#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

class HashMap
{
public:
    HashMap();
    //virtual ~HashMap();
    char tabelaHash[10][50];

    void inserir(char palavra[TAM]);
    int  verificarHash();
    void remover(char palavra[TAM]);
    void buscar(char palavra[TAM]);
    int fazerHash(char palavra[TAM]);
    int fazerHash2(char palavra[TAM]);

protected:
private:
};

#endif // HASHMAP_H
