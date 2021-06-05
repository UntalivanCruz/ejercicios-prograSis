#include <iostream>

using namespace std;

//[] Reservan una cantidad de memoria continua-> Arrays
//() Funcion, constructor, void, int, etc

int main(){
    int cantidad;
    cout<<"Cuantos numeros desea ingresar: ";
    cin>>cantidad;
    //new Reservar de forma dinamica # cantidad de espacios
    int *numeros = new int[cantidad];
    
    //Recorre Inicio hasta el final
    for(int contador=0; contador<cantidad; contador++){
        cout<<"Ingrese un numero: ";
        cin>> *numeros++;
    }
    //Regresa del final al inicio
    for(int contador=0; contador<cantidad; contador++){
        cout<<--numeros<<": "<<*numeros<<endl;
    }

    //Recorre del inicio al final
    for(int contador=0; contador<cantidad; contador++){
        cout<<numeros<<": "<<*numeros++<<endl;
    }
    cout<<--numeros<<endl;
    delete [] numeros;
    return 0;
}
