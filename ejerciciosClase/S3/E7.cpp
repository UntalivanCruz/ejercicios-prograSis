/*
Utilizar una funcion que me devuelva un numero aleatorio
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    double aleatorio=0;
    srand (time(NULL));
    aleatorio= rand() % 23;
    
    cout<<"Numero aleatorio: "<<aleatorio<<endl;
    return 0;
}