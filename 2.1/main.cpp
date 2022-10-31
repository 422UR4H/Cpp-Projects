#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float salario;
    int horasNormais, horasExtras;

    cout << "Programa que calcula um salario anual em funcao das horas anuais trabalhadas" << endl;
    cout << "Entre com as horas normais: "; cin >> horasNormais;
    cout << "Entre com as hoas extras: "; cin >> horasExtras;
    salario=horasNormais*10+horasExtras*15;
    cout << "Salario anual: " << salario << endl;

    system("pause>>null");
    return 0;
}
