#include <iostream>

using namespace std;

class partidos{
    public:
        void ingresarDatos(int codigo){
            cout<<"Encuentro #"<<codigo<<endl;
            cout<<"Ingrese el nombre del equipoA: ";
            cin>>equipoA;
            cout<<"Ingrese el nombre del equipoB: ";
            cin>>equipoB;
            cout<<"Como quedo el partido, ingrese los goles: "<<endl;
            cout<<"EQUIPO "<<this->equipoA<<": ";
            cin>>goles[0];
            cout<<"EQUIPO "<<this->equipoB<<": ";
            cin>>goles[1];
        }
    private:
        int numPartido;
        string equipoA;
        string equipoB;
        int goles[2];
};

int identificador=1, cantidad;
partidos *EURO;

void disputarPartidos(){
    for(int x=0;x<cantidad;x++){
        (EURO+x)->ingresarDatos(identificador);
        identificador++;
    }
}

int main(){
     int opcion;
    do{
        cout<<"\tMENU\n1.Definir cantidad de partidos\n2.Definir encuentros\n3.Salir"<<endl;
        cout<<"Ingrese la opcion que desea: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Cuantos partidos se van a disputar:";
                cin>>cantidad;
                EURO=new partidos[cantidad];
                break;
            case 2:
                disputarPartidos();
                break;
                
            //Mostrar resultado
            //Buscar un partido
            // buscar un resultado
            //Ordenar partidos
            
            case 3:
                cout<<"Gracias por utilizar nuestro sistema, hasta pronto!"<<endl;
                break;
            default:
                cout<<"Opcion incorrecta, ingrese de nuevo"<<endl;
                break;
        }
    }while(opcion!=3);
    
    delete[] EURO;
    return 0;
}