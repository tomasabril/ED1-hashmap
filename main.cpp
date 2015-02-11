
#include "include/HashMap.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

using namespace std;

int main()
{
    HashMap mapa;
    int choice;
    char palavra[TAM];
    while (1)
    {
        cout<<"\n----------------------"<<endl;
        cout<<"Operations on Hash Table";
        cout<<"\n----------------------"<<endl;
        cout<<"1.Insert element into hashmap"<<endl;
        cout<<"2.Search element"<<endl;
        cout<<"3.Delete element"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter element to be inserted: ";
            scanf("%s", palavra);
            mapa.inserir(palavra);
            break;
        case 2:
            cout<<"Enter element to be searched: ";
            scanf("%s", palavra);
            mapa.buscar(palavra);
            break;
        case 3:
            cout<<"Enter element to be deleted: ";
            scanf("%s", palavra);
            mapa.remover(palavra);
            break;
        case 4:
            exit(1);
        default:
            cout<<"\nEnter correct option\n";
        }

    }

    return 0;
}
