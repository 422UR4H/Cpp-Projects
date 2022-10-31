#include <iostream>

using namespace std;

int main()
{
    int tam, i, qtd=1;
    float nota, maiorNota;

    cout<<"Programa que devolve a maior nota"<<endl;
    cout<<"Entre com o tamanho da turma: "; cin>>tam;
    cout<<"Nota 1: "; cin>>maiorNota;
    for(i=1;i<tam;i++){
        cout<<"Nota "<<i+1<<": "; cin>>nota;
        if(nota>maiorNota){
            maiorNota=nota;
            qtd=1;
        }
        else if(nota==maiorNota)
            qtd++;
    }
    cout<<"Maior nota: "<<maiorNota<<endl<<"Apareceu "<<qtd<<" vez(es)"<<endl;

    return 0;
}
