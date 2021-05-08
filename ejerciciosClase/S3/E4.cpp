/*
Un estudiante se desea matricular en la universidad y quiere saber
en que periodo academico se encuentra la universidad.
El usuario va ingresar el numero del mes calendario y el sistema
le indicara que periodo es
Periodo I: Enero-Marzo
Periodo II: Abril-Junio
Periodo III: Julio-Septiemnre
Periodo IV: Octubre-Diciembre
*/

#include <iostream>

using namespace std;

int main(){
    int mesCalendario;
    cout<<"Ingrese el numero del mes Calendario:";
    cin>>mesCalendario;
    
    switch(mesCalendario){
        case 1:
        case 2:
        case 3:
            cout<<"Estamos en el primer periodo academico";
            break;
        case 4:
        case 5:
        case 6:
            cout<<"Estamos en el segundo periodo academico";
            break;
        case 7:
        case 8:
        case 9:
            cout<<"Estamos en el tercer periodo academico";
            break;
        case 10:
        case 11:
        case 12:
            cout<<"Estamos en el cuarto periodo academico";
            break;
        default:
            cout<<"Numero de mes incorrecto";
            break;
    }
    return 0;
}