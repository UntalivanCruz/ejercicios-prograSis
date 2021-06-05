#include <iostream>

using namespace std;

void fnCambio(int *apt1,int *apt2){
    int temp= *apt1;
    *apt1=*apt2;
    *apt2=temp;
}

void mostrarDatos(int *apt1,int *apt2){
        cout<<"Primer valor: "<<*apt1<<"\nSegundo valor: "<<*apt2<<endl;

}

int main(){
    int primerValor, segundoValor;
    cout<<"Ingrese dos valores:";
    cin>>primerValor>>segundoValor;
    
    //Intercambiar valores
    mostrarDatos(&primerValor, &segundoValor);
    
    for(int contador=0;contador<3;contador++){
        fnCambio(&primerValor, &segundoValor); 
        mostrarDatos(&primerValor, &segundoValor);
    }
    return 0;
}