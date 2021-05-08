/* APLICAR UN DESCUENTO DEL TOTAL DE COMPRAS DE UN USUARIO DETERMINADO POR 
LOS SIGUIENTES VALORES:
TOTAL DE COMPRAS ES ENTRE 0 A 1000 LPS -> 10% DESCUENTO
TOTAL DE COMPRAS ES ENTRE 1001 A 5000 LPS -> 20% DESCUENTO
TOTAL DE COMPRAS ES MAYOR A 5000 LPS -> 30% DE DESCUENTO
*/

#include <iostream>

using namespace std;

int main(){
    int totalCompras=0;
    int descuento=0;
    int totalNeto=0;
    //CONSTRUCTORES y DESTRUCTORES
    
    cout<<"Ingrese el valor del total de sus compras: ";
    cin>>totalCompras;
    // 0...1000 AND -> && OPERADOR LOGICO
    if(totalCompras>=0 && totalCompras<=1000){
        descuento=totalCompras*0.10;
    } else
        if(totalCompras>1000 && totalCompras<=5000){
            descuento=totalCompras*0.20;
        }
        else 
            if(totalCompras>5000){
                descuento=totalCompras*0.30;
            } else{
                descuento=0;
            }
            
    totalNeto=totalCompras-descuento;
    
    cout<<"Subtotal: "<<totalCompras<<" lps."<<endl;
    cout<<"Descuento: "<<descuento<<" lps."<<endl;
    cout<<"Total: "<<totalNeto<<" lps."<<endl;
    return 0;
}

/*
OPERADORES LOGICOS
    && -> AND
    || -> OR
*/