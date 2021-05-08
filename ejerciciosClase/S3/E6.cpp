/*
Tablas multiplicar

Estructura de repeticion
FOR
*/

#include <iostream>

using namespace std;

int main(){
    int tabla=0;
    int limite=0;
    
    
    cout<<"Que tabla de multiplicar desea?: ";
    cin>>tabla;
    cout<<"Ingrese el limite del multiplicador: ";
    cin>>limite;

    cout<<"\nTABLA DEL "<<tabla<<"\n\n";
    
    for(int multiplicador=1; multiplicador<=limite; multiplicador++){
        cout<<tabla<< " x "<<multiplicador<<" = "<<tabla*multiplicador<<endl;
    }
    return 0;
}