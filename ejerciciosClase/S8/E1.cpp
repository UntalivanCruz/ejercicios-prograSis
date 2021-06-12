/*
[OK]Pedir al usuario N números, almacenarlos en un arreglo dinámico
posteriormente ordenar los números en orden ascendente 
y mostrarlos en pantalla.
[5 , 4 ,10 25 , 15]
=
[4 , 5 , 10, 15 , 25]
ALGORITMO = Metodo de ordenamiento Burbuja

Ordenar: BURBUJA, Seleccion y Inserccion
*/

#include <iostream>

using namespace std;

int *datos;
int cantidad=0;

void ingresarValores(){
    cout<<"Cuantos datos desea ingresar: ";
    cin>>cantidad;
    
    //reservo la meoria
    datos = new int[cantidad];
    for(int contador=0; contador<cantidad; contador++){
        cout<<"Ingrese el valor numerico del espacio "<<contador+1<<":";
        cin>>*(datos+contador);
    }
}

void ordenarBurbuja(int *datos, int cantidad,bool tipo){
    int auxiliar;
    
    for(int a=0; a<cantidad;a++){
        for(int b=0;b<(cantidad-1);b++){
            if(tipo){
                if(*(datos+b) > *(datos+b+1)){
                    auxiliar=*(datos+b);
                    *(datos+b)=*(datos+b+1); //-> <- Intercambio 
                    *(datos+b+1)=auxiliar;
                }
            }else{
                if(*(datos+b) < *(datos+b+1)){
                    auxiliar=*(datos+b);
                    *(datos+b)=*(datos+b+1); //-> <- Intercambio 
                    *(datos+b+1)=auxiliar;
                }
            }
        }
    }
}

void mostrarDatos(int *datos, int cantidad){
    for(int x=0;x<cantidad;x++){
        cout<<*(datos+x)<< " -> ";
    }
    cout<<endl;
}

int main(){
    ingresarValores();
    cout<<"Datos desordenados"<<endl;
    mostrarDatos(datos,cantidad);
    cout<<"Datos ordenados ascendente"<<endl;
    ordenarBurbuja(datos,cantidad,1);
    mostrarDatos(datos,cantidad);
    
    cout<<"Datos ordenados descendente"<<endl;
    ordenarBurbuja(datos,cantidad,0);
    mostrarDatos(datos,cantidad);
    //borro o liberar la memoria
    delete[] datos;
    return 0;
}