#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    float salario, imposto;
    int horasNormais, horasExtras;

    cout << "Programa que calcula um salario anual em funcao das horas anuais trabalhadas" << endl;
    cout << "Entre com as horas normais: "; cin >> horasNormais;
    cout << "Entre com as hoas extras: "; cin >> horasExtras;
    salario=horasNormais*10+horasExtras*15;
    cout << "Salario anual: " << salario << endl;//procurar como escreve 2 digitos DECIMAIS de precisao
    //exercicio 2.2 comeca aqui
    if(salario<=12000)
        imposto=salario*0.1;
    else{
        imposto=1200;
        imposto+=(salario-12000)*0.25;
    }
    cout << "Imposto anual: " << imposto << endl;

    system("pause>>null");
    return 0;
}
