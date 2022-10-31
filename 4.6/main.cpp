#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num;

    cout<<"Programa que calcula expressao no stdout"<<endl;
    cout<<"Valor: "<<endl; cin>>num;//endl aqui pq o exercicio pede
    cout<<"Triplo: "<<num*3<<endl;
    cout<<"Quadrado: "<<num*num<<endl;
    cout<<"Meio: "<<1.0*num/2<<endl;//1.0 multiplica p/ passar o valor p/ float

    system("pause>>null");
    return 0;
}
