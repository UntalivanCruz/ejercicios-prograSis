/*
Sistema que indique el dia de la semana
1. Lunes
2. Martes
...
7. Domingo
*/

#include <iostream>

using namespace std;

int main(){
    int numeroDia;
    cout<<"Ingrese un numero de la semana entre 1 a 7: ";
    cin>>numeroDia;
    switch(numeroDia){
        case 1:
            cout<<"El dia es Lunes"<<endl;
            break;
        case 2:
            cout<<"El dia es Martes"<<endl;
            break;
        case 3:
            cout<<"El dia es Miercoles"<<endl;
            break;
        case 4:
            cout<<"El dia es Jueves"<<endl;
            break;
        case 5:
            cout<<"El dia es Viernes"<<endl;
            break;
        case 6:
            cout<<"El dia es Sabado"<<endl;
            break;
        case 7:
            cout<<"El dia es Domingo"<<endl;
            break;
        default:
            cout<<"Numero de dia no encontrdo"<<endl;
            break;
    }
    cout<<"Fin del programa";
    return 0;
}