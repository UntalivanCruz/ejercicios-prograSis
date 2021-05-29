//POO: Programacion orientada a objetos

//Recibo de energia electrica
#include <iostream>

using namespace std;

class Recibo{
//Nivel de permisos, accesos, seguridad..    
  public:
    //constructor-> es una funcion que ese ejecuta al inicio, cuando se crea un objeto
    Recibo(int _codigo,string _fecha, float _precio){
        codigo=_codigo;
        precioKWh=_precio;
        fecha=_fecha;
        lecturaInicio=0;
        lecturaFin=0;
        lecturaReinicio=0;
    }
    
    void pedirDatos(){
        bool datosCorrectos;
        do{
            datosCorrectos=1;
            cout<<"Ingrese la lectura de inicio de mes:";
            cin>>lecturaInicio;
            cout<<"Ingrese la lectura al final del mes:";
            cin>>lecturaFin;
            if(obtenerConsumo()<0){
                cout<<"Revise los datos de nuevo, las lecturas son correctas? 1.SI 0.NO:";
                cin>>datosCorrectos;    
            }
        }while(!datosCorrectos);
        
        if(obtenerConsumo()<0){
            cout<<"Ingrese la lectura antes del reinicio o sustitucion del medidor:";
            cin>>lecturaReinicio;
        }
    }
    
    int calcularFactura(){
//        cout<<obtenerConsumo()<<" - "<<precioKWh<<endl;
        return obtenerConsumo() * precioKWh;
    }
    
    int obtenerConsumo(){
        int total = (lecturaReinicio>0) ?
            (lecturaReinicio - lecturaInicio + lecturaFin) :
            (lecturaFin-lecturaInicio);
        return total;
    }
    
    string obtenerMes(){
        return fecha;
    }
    
  private:
    int lecturaInicio;
    int lecturaFin;
    int lecturaReinicio;
    float precioKWh;
    int codigo;
    string fecha;
};

//CREE - ENEE -EEH
class PreciosEnergia{
    public:
        PreciosEnergia(string _mes, float _valor){
            mes=_mes;
            valor=_valor;
        }
        
        float obtenerPrecio(){
            return valor;
        }
    private:
        string mes;
        float valor;
};

int main(){
    //Creando un objeto (factura1) basado en la estructura Recibo
    string fecha;
    cout<<"Que mes desea calcular[NombreMes-Año]?:";
    cin>>fecha;
    PreciosEnergia articula502(fecha, 4.5324);
    Recibo factura1(1001,fecha,articula502.obtenerPrecio());
    factura1.pedirDatos();
    
    cout<<"La factura del mes de "<<factura1.obtenerMes()<<" es de: Lps.";
    cout<<factura1.calcularFactura()<<endl;
    cout<<"Se consumieron "<<factura1.obtenerConsumo()<<" kWh durante el mes"<<endl;
    return 0;
}