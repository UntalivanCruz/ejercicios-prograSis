#include <iostream>

using namespace std;

int fnSuma(int *apt1, int *apt2){
    return *apt1 + *apt2;
}

int main(){
    int primerValor=0,segundoValor=0;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>primerValor>>segundoValor;
    
    cout<<"Total de la suma: "<<fnSuma(&primerValor, &segundoValor)<<endl;
    return 0;
}