#include <iostream>
using namespace std;
//CLASE PADRE/BASE

class Materia{
    public:
        Materia(string _materia,string _ciencia){
            nombre=_materia;
        }
        
    protected:
        int uv;
        void mostrarMateria(){
            cout<<"El nombre de la materia es "<<nombre<<endl;
        }
        
        void obtenerUV(){
            bool error;
            do{
                cout<<"Ingrese la cantidad de UV: ";
                cin>>uv;
                if(uv>0 and uv<=5){
                    cout<<"Registrado correctamente"<<endl;
                    error=0;
                }else{
                    cout<<"Unidades valorativas fuera del rango"<<endl;
                    error=1;
                    cout<<"Ingrese nuevamente las UV entre 0 a 5 su valor"<<endl;
                }
            }while(error);
        }
        
    private:
        string nombre;
        string ciencia;
};
//CLASE HIJA/SUBCLASE
class Seccion : public Materia {
    public:
        Seccion(int _codigo, string _materia,string _ciencia):Materia(_materia,_ciencia){
            codSeccion=_codigo;
        }
        
        void pedirInfo(){
            int unidadesV;
            cout<<"Ingrese el numero de aula: ";
            cin>>aula;
            cout<<"Ingrese la hora de la clase: ";
            cin>>horario;
            obtenerUV();
        }
    
        void mostrarInformacion(){
            cout<<"Seccion: "<<codSeccion<<" - ";
            mostrarMateria();
            cout<<"Aula: "<<aula<<" - "<<horario<<":00 - UV:"<<uv<<endl;
        }
    private:
        int codSeccion;
        int aula;
        int horario;
};

int main(){/*
    Materia padre;
    padre.nombre="Programacion";
    cout<<"***Clase padre ***\n"<<padre.nombre<<endl;
    
    Seccion hijo;
    hijo.codSeccion=1001;
    cout<<"\n***Clase Hijo***\n"<<hijo.codSeccion<<endl;
    hijo.nombre="Ingles1";
    cout<<hijo.nombre<<endl;
    mat1.nombre="Español";
    mat1.codSeccion=5002;
    mat1.mostrarMateria();
    */
 
    Seccion mat1(5002,"Español","Generales");
    mat1.pedirInfo();
    mat1.mostrarInformacion();
    
    return 0;
}