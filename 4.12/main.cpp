#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char linha1[20], linha2[20];

    cout<<"Programa que nao usa gets, mas as reescreve sepanando-as por \"/-/\""<<endl;
    cout<<"Entre com uma string de no maximo 20 chars\n";
    gets(linha1);
    cout<<"Entre com outra string de no maximo 20 chars\n";
    gets(linha2);
    cout<<linha1<<"/-/"<<linha2;

    system("pause>>null");
    return 0;
}
