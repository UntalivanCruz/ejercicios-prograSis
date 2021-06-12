/*
Pedir al usuario N números, almacenarlos en un arreglo dinámico
posteriormente el usuario podra buscar un valor.
ALGORITMO DE BUSQUEDA
-> Secuencial
*/

#include <iostream>

using namespace std;

int *datos, valorRecibido=-1;
int cantidad=0;

void ingresarValores(){
    cout<<"Cuantos datos desea ingresar: ";
    cin>>cantidad;
    
    //reservo la meoria
    datos = new int[cantidad];
    for(int contador=0; contador<cantidad; contador++){
        do{
            cout<<"Ingrese un valor numerico positivo al espacio "<<contador+1<<":";
            cin>>valorRecibido;
        }while(valorRecibido<0);
        *(datos+contador)=valorRecibido;
    }
}

void mostrarDatos(int *datos, int cantidad){
    for(int x=0;x<cantidad;x++){
        cout<<datos+x<<" - "<<*(datos+x)<<endl;
    }
    cout<<endl;
}

void buscar(int *Lista,int cantidad){
    int *encontrado,valor;
    bool bandera=0;
    
    cout<<"Que valor desea buscar?: ";
    cin>>valor;
    for(
        int contador=0;
        (bandera==0) && (contador<cantidad);
        contador++
    ){
        if(*(datos+contador)==valor){
            bandera=1;
            encontrado=(datos+contador);
        }
    }
    
    if(bandera){
        cout<<"Valor encontrado: "<<(encontrado)<<" - "<<*(encontrado)<<endl;
    }else{
        cout<<"Valor no encontrado"<<endl;
    }
}

void ordenar(int *datos, int cantidad,bool tipo){
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

int main(){
    int opcion;
    do{
        cout<<"\tMENU\n1.Agregar datos\n2.Mostrar todos los datos\n3.Buscar un dato\n4.Ordenar Asc\n5.Ordenar Desc\n6.Salir"<<endl;
        cout<<"Ingrese la opcion que desea: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                ingresarValores();
                break;
            case 2:
                cout<<"Lista de Datos"<<endl;
                mostrarDatos(datos,cantidad);
                break;
            case 3:
                buscar(datos,cantidad);
                break;
            case 4:
                ordenar(datos,cantidad,1);
                cout<<"Datos ordenados de forma ascendente"<<endl;
                break;
            case 5:
                ordenar(datos,cantidad,0);
                cout<<"Datos ordenados de forma descendente"<<endl;
                break;
            case 6:
                cout<<"Gracias por utilizar nuestro sistema, hasta pronto!"<<endl;
                break;
            default:
                cout<<"Opcion incorrecta, ingrese de nuevo"<<endl;
                break;
        }
    }while(opcion!=6);
    return 0;
}