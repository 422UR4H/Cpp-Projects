#include <iostream>

using namespace std;

int main()
{
    int tam, i;
    float nota, maiorNota;

    cout<<"Programa que devolve a maior nota"<<endl;
    cout<<"Entre com o tamanho da turma: "; cin>>tam;
    cout<<"Nota 1: "; cin>>maiorNota;
    for(i=1;i<tam;i++){
        cout<<"Nota "<<i+1<<": "; cin>>nota;
        if(nota>maiorNota)
            maiorNota=nota;
    }
    cout<<"Maior nota: "<<maiorNota<<endl;

    return 0;
}
