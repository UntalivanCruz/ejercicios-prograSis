//POO - Para un sistema de ticket de un Peaje
/*
Evaluar el tipo de vehiculo (cantidad de ejes va depender la tarifa)
2. Lps. 21
3. Lps. 40
4. Lps. 100
imprimir el ticket-> Placa, hora, valor a pagar.
Validacion: si el tipo de vehiculo es de emergencia(ambulancia, patrulla) no paga peaje.
*/

class Ticket{
    public:
        Ticket(string _placa, string _hora)
        int obtenerPrecio(int cantidadEjes)
    private:
        string placa;
        string hora;
        int precio;
};