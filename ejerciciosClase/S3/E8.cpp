/* Un juego donde tire la moneda al aire seleccionando una cara de la moneda,
Si pierdo quisiera volver intentar tirar la moneda de nuevo, hasta llegar a
ganar*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    // TRUE | FALSE     0 | 1       OFF | ON
    bool caraMonedaUsuario=0,ganador=0;
    // 0 - ####
    int caraMonedaGanadora=0;
    int numAciertos=0;
    int numPerdidas=0;
    srand (time(NULL));
    //Ejecuta al menos una vez siempre
    do{
        caraMonedaGanadora=rand() % 2;
        cout<<"Que cara de la moneda quiere 0. ESCUDO y 1. CARA:";
        cin>>caraMonedaUsuario;
        //IF ELSE ... IF Ternario
        //ganador= (caraMonedaGanadora == caraMonedaUsuario)? 1 : 0 ;
        if(caraMonedaGanadora == caraMonedaUsuario){
            ganador=1; //TRUE;
            numAciertos++;
        }else{
            ganador=0; //FALSE;
            numPerdidas++;
        }
    }while(ganador == 0);
        cout<<"Ganaste!"<<endl;
        cout<<"ACIERTOS: "<<numAciertos<<" PERIDOS: "<<numPerdidas<<endl;
    return 0;
}