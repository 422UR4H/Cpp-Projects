#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    double real;

    cout<<"Programa que le um valor real e devolve com uma casa decimal"<<endl;
    cout<<"Entre com um double entre 0 e 9: "; cin>>real;
    cout<<"Double: "<<setprecision(2)<<real<<endl;//aprender como fazer isso direito

    system("pause>>null");
    return 0;
}
