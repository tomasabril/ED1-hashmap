#include "HashMap.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

using namespace std;

HashMap::HashMap()
{
    //ctor
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            tabelaHash[i][j] = ' ';
        }
    }

}
void HashMap::inserir(char palavra[TAM])
{
    if(verificarHash() == 0)
    {
        int key = 0;
        key = fazerHash(palavra);
        //printf("\n Chave: %d \n",key);

        for(int i=0 ; i < strlen(palavra); i++)
        {
            tabelaHash[key][i] = palavra[i];
        }
    }
    else
    {
        printf("\n O Hashmap esta cheio\n");
    }
}

int HashMap::verificarHash()
{
    int i;
    int cont=0;
    for(i=0; i<10; i++)
    {
        if( tabelaHash[i][0] != ' ')
            cont++;
    }
    if(cont == 10)
        return 1;
    else
        return 0;
}

void HashMap::remover(char palavra[TAM])
{

}

void HashMap::buscar(char palavra[TAM])
{
    int igual=0;
    int tmp=0, tmp2;
    for(int i=0; i<10; i++)
    {
        igual=0;
        tmp2=0;
        for(int j=0; j<TAM; j++)
        {
            if( tabelaHash[i][j] == palavra[j] )
            {
                igual++;
            }
        }
        if(igual == TAM)
        {
            tmp2=1;
        }
        if( tmp2 == 1)
        {
            printf("A palavra se encontra na posicao %d \n",i);
            tmp=1;
            break;
        }
    }
    if(tmp==0)
        printf("Palavra nao econtrada\n");
}

int HashMap::fazerHash(char palavra[TAM])
{
    int key;
    for(int i=0; i<strlen(palavra); i++)
    {
        key += (int)palavra[i];
    }
    key = key%10;
    return key;
}

int HashMap::fazerHash2(char palavra[TAM])
{

}

/*HashMap::~HashMap()
{
    //dtor
}
*/
