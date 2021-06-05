//FUNCIONES DE TIPO APUNTADOR
#include <iostream>

using namespace std;
// Funciones de tipo apuntador
int * fnApt(int *apt){
    return apt;
}

int main(){
    int var=10;
    int *numero = &var;
    
    numero=fnApt(numero);
    cout<<*numero;
    return 0;
}