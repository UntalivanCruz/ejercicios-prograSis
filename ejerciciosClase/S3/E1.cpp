//ESTRUCTURAS DE DICISION -> IF ELSE

#include <iostream>

using namespace std;

int main(){
    int primerValor=0, segundoValor=0;
    cout<<"Ingrese el primer valor:";
    cin>>primerValor;
    cout<<"Ingrese el segundo valor:";
    cin>>segundoValor;
    
/*              ?
                >
                <
                >=
                <=
                ==
                !=
            TRUE or FALSE
                bool estadoOperacion
                ON OFF
*/
    if(primerValor>segundoValor)
    {
        cout<<""<<primerValor<<" es mayor que "<<segundoValor;
    } else 
        if(primerValor==segundoValor){
            cout<<""<<primerValor<<" es igual a "<<segundoValor;
        } else 
        {
            cout<<""<<primerValor<<" es menor que "<<segundoValor;
        }
    return 0;
}