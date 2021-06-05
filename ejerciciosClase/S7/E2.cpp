#include <iostream>

using namespace std;

int main(){
    /*
    * -> Para crear la variable de tipo apuntador: int *variable;
    & -> Para obtener la posicion de memoria: cout<<&variable;
    * -> Para acceder a la posicion de memoria: *variable = 10;
    */
    int numero=30;
    int *apt= &numero;
    
    cout<<&numero<<endl;
    *apt=10;
    cout<<numero<<endl;
    return 0;
}