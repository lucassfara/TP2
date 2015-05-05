# TP2
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;

    cout << "Ingrese Numero: ";
    cin >> a;

    a=a%2;
    
        if (a == 1){
            cout << "Su numero es par \n";}

        else {
            cout << "Su numero no es par \n" ;
    }
    return 0;
}
