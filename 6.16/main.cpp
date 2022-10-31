#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int qtd;

    cout<<"Programa que imprime uma figura com '*'"<<endl;
    cout<<"Entre com o numero de linhas: "; cin>>qtd;
    for(int i=0;i<qtd;){
        for(int j=0;j<qtd;j++){
            cout<<'*';
        }
        qtd--;
        cout<<endl;
    }

    system("pause>>null");
    return 0;
}
