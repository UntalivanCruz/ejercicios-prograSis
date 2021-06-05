//Logica -- EJECUCION
#include <iostream>
#include "estructura.h"

using namespace std;

producto::producto(){
    cout<<"Se ha creado el producto"<<endl;
}

producto::producto(int codigo,string nombre){
    this->codigo=codigo;
    this->nombre=nombre;
    cout<<"Se ha creado el producto"<<endl;
}

void producto::getData(){
    cout<<"Codigo: "<<codigo<<"\nNombre: "<<nombre<<endl;
}

void producto::setData(){
    cout<<"Ingrese el codigo: ";
    cin>>this->codigo;
    cout<<"Ingrese el nombre: ";
    cin>>this->nombre;
}

void inventario::setCantidad(producto *prod){
    cout<<"Ingrese la cantidad: ";
    cin>>this->cantidad;
    this->prod = prod;
}

void inventario::mostrarInventario(){
    cout<<"\n\t**** INVENTARIO ****"<<endl;
    this->prod->getData();
    cout<<"Cantidad en inventario: "<<this->cantidad<<endl;
}

int main(){
    producto inv1(1001,"Computadora");
    inv1.getData();
    /*
    producto *inv2 = new producto[2];
    inv2->setData();
    inv2++;
    inv2->setData();
    inv2--;
    inv2->getData();
    inv2++;
    inv2->getData();
    */
    inventario *empresa = new inventario[2];
    empresa->setCantidad(&inv1);
    empresa->mostrarInventario();
    
    return 0;
}

//Listas enlazadas, pilas, colas, grafos, arboles...Estructuras de datos