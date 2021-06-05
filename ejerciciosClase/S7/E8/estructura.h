//Modelado de la estructura -- INTERFAZ
#include <string>
using std::string;

class producto{
    public:
        producto();
        producto(int,string);
        void getData();
        void setData();
    private:
        int codigo;
        string nombre;
};

class inventario{
    public:
        void setCantidad(producto *);
        void mostrarInventario();
    private:
        int cantidad;
        producto * prod;
};