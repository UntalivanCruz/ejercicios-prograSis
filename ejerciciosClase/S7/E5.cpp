/*
Paso 1: Reserven # espacio en memoria (Array con apuntador)
int *espacio = new int[10];

Paso 2: Ingresan la cantidad de valores en el espacio reservado

Paso 3: Quiero que busquen el valor menor, necesito el valor mayor.
*/
#include<iostream>
using namespace std;

int main(){
	int nElementos,menor=999999,mayor=0;//numeros[100],*dir_numeros,
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	int *dir_numeros = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>dir_numeros[i]; //Guardamos los elementos en el arreglo
	}
	
	//dir_numeros = numeros;
	
	for(int i=0;i<nElementos;i++, dir_numeros++){//Determinamos el menor elemento en cada
		if(*dir_numeros < menor){//iteracion del bucle
			menor = *dir_numeros;
		}
		if(*dir_numeros > mayor){
		    mayor = *dir_numeros;
		}
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	cout<<"El elemento mayor es: "<<mayor<<endl;
	delete [] dir_numeros;
	return 0;
}
