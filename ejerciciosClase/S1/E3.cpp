/* Programa que permita realizar cuatro operaciones aritmeticas(sumar,restar,multiplicar y dividr)
condos numeros que el usuario va a
ingresar en nuestro programa y va ser capaz de hacer el calculo
y mostrar el resultado al usuario */

#include <iostream>

int main(){
    // DEFINIR VARIABLES
    int numero1 = 0;
    int segundoNumero = 0;
    int totalSuma = 0;
    int totalResta = 0;
    int totalmultiplicacio = 0;
    int totalDivi = 0;
    // PEDIR DATOS AL USUARIO
    std::cout << "Hola, necesito que ingreses tu primer numero entero: ";
    std::cin >> numero1;
    std::cout << "Ingresa el valor del segundo numero: ";
    std::cin >> segundoNumero;
    
    //CALCULOS
    totalSuma = numero1 + segundoNumero;
    // JOSE RESTA
    totalResta = numero1 - segundoNumero;
    
    // LUIS FERNANDO MULTIPLICACION
    totalmultiplicacio = numero1*segundoNumero;
    
    //Wilmer Division
    totalDivi = numero1 / segundoNumero;

    //MOSTRAR EL RESULTADO
    std::cout << "El total de la suma es: " << totalSuma << std::endl;
    std::cout << "El total de la resta es: " << totalResta << std::endl;
    std::cout << "El total de la multiplicacion  es: " << totalmultiplicacio << std::endl;
    std::cout << "El total de la division es: "<<totalDivi<< std::endl;
    return 0;
}
