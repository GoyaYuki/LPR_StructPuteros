#include <iostream>
#include <cstring>
using namespace std;

// Estructura que representa un socio de la cooperadora
struct Socio {
    int id;              // Identificador del socio
    char nombre[50];     // Nombre del socio
    float cuota;         // Monto de la cuota que paga
};

// Función para cargar los datos del socio
// Se recibe un puntero a la estructura y se usa el operador ->
void cargarDatos(Socio* ptr) {

    cout << "\n--- Carga DE Datos ---" << endl;

    // Se solicita el ID
    cout << "Ingrese el ID del socio: ";
    cin >> ptr->id;

    // Limpia el buffer para evitar problemas al leer texto
    cin.ignore();

    // Se solicita el nombre
    cout << "Ingrese el nombre del socio: ";
    cin.getline(ptr->nombre, 50);

    // Se solicita el monto de la cuota
    cout << "Ingrese el monto de la cuota: ";
    cin >> ptr->cuota;
}

int main() {

    // Se crea una variable de tipo Socio
    Socio miEntidad;

    // Título del programa
    cout << "=====================================================" << endl;
    cout << " DESAFIO DE CONTROL DE MODELADO (LPR 5-3) " << endl;
    cout << "=====================================================" << endl;

    // Se llama a la función enviando la dirección de memoria
    // del objeto usando el operador &
    cargarDatos(&miEntidad);

    // Se muestran los datos ingresados
    cout << "\n=== DATOS VERIFICADOS EN EL SISTEMA ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Cuota Registrada: $" << miEntidad.cuota << endl;

    // Se muestra la dirección de memoria donde está almacenada la estructura
    cout << "Direccion de Memoria RAM (Hexadecimal): " << &miEntidad << endl;
    cout << "=====================================================" << endl;

    return 0; // Finaliza el programa correctamente
}