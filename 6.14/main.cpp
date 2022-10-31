#include <iostream>

using namespace std;

int main()
{
    cout<<"Programa que imprime uma sequencia numeral gigante"<<endl;
    for(int i=9;i>0;i--)
        for(int j=i;j>0;j--)
            cout<<j;
    cout<<endl;
    for(int i=65;i<91;i++)
        cout<<(char)i;
    return 0;
}
