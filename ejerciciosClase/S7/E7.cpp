#include <iostream>

using namespace std;
//this es un apuntador que siempre existe y cambia dinamicamente
//Este guarda la posicion de memoria donde estamos ubicados.
class Aula{
    public:
        Aula(int numeroAula,int capacidad){
            this->numeroAula=numeroAula;
            this->capacidad=capacidad;
            Aula();
        }
        //Sobrecarga de funciones o en Herencia(Polimorfismo)
        Aula(){
            cout<<"Aula Creada!"<<endl;
            aire=0;
            iluminacion=0;
        }
        
        void setDatos(){
            cout<<"Ingrese numero de Aula: ";
            cin>>numeroAula;
            cout<<"Ingrese capacidad:";
            cin>>capacidad;
        }
        
        void getDatos(){
            cout<<"Numero de Aula: "<<numeroAula<<endl;
            cout<<"Capacidad de alumnos: "<<capacidad<<endl;
        }
        
        bool setComplementos(bool aire, bool iluminacion){
            this->aire=aire;
            //(*this).aire = aire;
            this->iluminacion=iluminacion;
            return (aire && iluminacion)? 1:0;
        }
        
        //IF TERNARIO
        /*
        (Evaluacion) ? TRUE : FALSO
        if(a>b){ true } else{ falso}
        */
        
    private:
        int numeroAula;
        int capacidad;
        bool aire;
        bool iluminacion;
};

int main(){
//    Aula labProgramacion();
//    Aula labElectronica(309,20);
//    Aula *laboratorio = new Aula();

    Aula *ceutec = new Aula[3];
    
    for(int c=0;c<3;c++){
        ceutec->setDatos();
        //(*ceutec).setDatos();
        ceutec++;
    }
    
   for(int c=0;c<3;c++){
    ceutec--;
    ceutec->getDatos();
   }
    
    return 0;
}