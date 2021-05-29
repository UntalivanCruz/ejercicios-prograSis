//MEMORIA DINAMICA (APUNTADORES)

#include <iostream>

using namespace std;

int main(){
        //Donde se guarda la info de la variable? R/= RAM
    // 2 GB de memoria RAM | --------AQUI!- | ->2GB
    
    //& -> conocemos en que posicion de la ram se guarda una variable byte
    
    int numero = 10;
    cout<<"Posicion variable RAM: "<<  &numero<<endl;
    
    //APUNTADORES para crear hay que poner el simbolo de * a la izquierda del nombre
    int *apuntadorDeNumero;
    apuntadorDeNumero= &numero;
    
    cout<<"Dato del apuntador: "<<apuntadorDeNumero<<endl;
    cout<<"Posicion apuntador RAM: "<<&apuntadorDeNumero<<endl;
// HEXA CDEF , 0123   int -> 4byte

    *apuntadorDeNumero=5; //con el * izquierda el apuntador se desplaza adonde apunta
    cout<<"El nuvo valor de la variable es: "<<numero<<endl;
    numero =20;
    cout<<"Es lo mismo: "<<*apuntadorDeNumero<<endl;
    return 0;
    
    //numero == apuntadorNumero
    
}