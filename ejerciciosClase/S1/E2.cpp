/* Programa que permita sumar dos numeros que el usuario va a
ingresar en nuestro programa y va ser capaz de hacer el calculo
y mostrar el resultado al usuario */

#include <iostream>

int main(){
    // DEFINIR VARIABLES
    int numero1 = 0;
    int segundoNumero = 0;
    int totalSuma = 0;
    
    // PEDIR DATOS AL USUARIO
    std::cout << "Hola, necesito que ingreses tu primer numero entero: ";
    std::cin >> numero1;
    std::cout << "Ingresa el valor del segundo numero: ";
    std::cin >> segundoNumero;
    
    //CALCULOS
    totalSuma = numero1 + segundoNumero;
    /*
    + suma
    - resta
    * multiplicacion
    / division
    = asignar un valor
    */
    //MOSTRAR EL RESULTADO
    std::cout << "El total de la suma es: " << totalSuma << std::endl;
    return 0;
}
