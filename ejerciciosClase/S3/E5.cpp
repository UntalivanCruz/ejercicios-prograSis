/*
ESTRUCTRAS DE REPETICION
While
*/

#include <iostream>

using namespace std;

int main(){
    int contador=0;
    int limite=0;
    
    cout<<"Cuantas veces quiere saludar?: ";
    cin>>limite;
    /*
    >
    <
    >=
    <=
    TRUE
    FALSE
    */
    while(contador<limite){
//     contador = contador + 1;
//     contador += 1;
       contador++;
       
        if(contador==5){
            continue;
        }
        
        if(contador==10){
            break;
        }
        cout<<contador<<". Hola"<<endl;
    }
    cout<<"Adios"<<endl;
    return 0;
}