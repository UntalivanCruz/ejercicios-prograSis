#include <iostream>

using namespace std;

class boleto{
    public:
        int codigo;
        boleto *siguiente;
};

void agregarBoletos(boleto *&lista){
    //CREO EL NUEVO BOLETO
    boleto *nuevoBoleto = new boleto();
    cout<<"Ingrese el codigo del nuevo boleto:";
    cin>>nuevoBoleto->codigo;

    boleto *a1=lista;
    boleto *a2;
    
    //ENLAZARLO A LISTA
    //while((a1!=NULL)&& (a1->codigo < nuevoBoleto->codigo)){ //ORDENA ASC
    
    while(a1!=NULL){
        a2=a1;
        a1 = a1->siguiente;
    }
    
    if(lista == a1){
        lista = nuevoBoleto;
    }else{
        a2->siguiente=nuevoBoleto;
    }
    
    nuevoBoleto->siguiente=a1;
    cout<<"Boleto agregado"<<endl;
}

void mostrarDatos(boleto *lista){
    boleto *recorrido = new boleto();
    recorrido=lista;
    
    while(recorrido != NULL){
        cout<<recorrido->codigo<< " -> ";
        recorrido= recorrido->siguiente;
    }
    cout<<endl;
}

int main(){
    int opcion;
    boleto *ListaBoletos=NULL;
    
     do{
        cout<<"\tMENU\n1.Agregar Boletos\n2.Mostrar Boletos\n3.Salir"<<endl;
        cout<<"Ingrese la opcion que desea: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                agregarBoletos(ListaBoletos);
                break;
            case 2:
                mostrarDatos(ListaBoletos);
                break;
                //ORDENAR DATOS
                //BUSCAR
                //DELETE
                //delete POSICION
            case 3:
                cout<<"Gracias por utilizar nuestro sistema, hasta pronto!"<<endl;
                break;
            default:
                cout<<"Opcion incorrecta, ingrese de nuevo"<<endl;
                break;
        }
    }while(opcion!=3);
    
    return 0;
}