#include <iostream>
#include <cstring>
using namespace std;
// 1. DEFINI TU ESTRUCTURA (Debe tener minimo 3 campos: un entero, un char[] y un float)
struct EntidadProyecto {
int id;
char nombre[50];
float metrica; // Puede ser precio, temperatura, puntaje, etc.
};
// 2. FUNCION MODULAR (Usa el operador flecha -> para cargar datos)
void cargarDatos(EntidadProyecto* ptr) {
cout << "\n--- CARGA DE DATOS ASINCRONICA ---" << endl;
cout << "Ingrese el ID (entero): ";
cin >> ptr->id;
// Limpieza de buffer para evitar saltos de linea
cin.ignore();
cout << "Ingrese el Nombre (texto): ";
cin.getline(ptr->nombre, 50);
cout << "Ingrese la Metrica (decimal/float): ";
// COMPLETAR: Usa el operador flecha '->' para leer la metrica usando 'cin >>'
}
int main() {
// 3. DECLARAR LA ESTRUCTURA
EntidadProyecto miEntidad;
cout << "=====================================================" << endl;
cout << " DESAFIO DE CONTROL DE MODELADO (LPR 5-3) " << endl;
cout << "=====================================================" << endl;
// 4. INVOCAR LA FUNCION PASANDO LA DIRECCION DE MEMORIA
// COMPLETAR: Llama a la funcion 'cargarDatos' pasandole la direccion de 'miEntidad' usando '&'
// 5. MOSTRAR RESULTADOS Y DIRECCION DE MEMORIA
cout << "\n=== DATOS VERIFICADOS EN EL SISTEMA ===" << endl;
cout << "ID Registrado: " << miEntidad.id << endl;
cout << "Nombre Registrado: " << miEntidad.nombre << endl;
// COMPLETAR: Imprime el valor de la metrica
// Imprimimos la direccion física de memoria en hexadecimal
cout << "Direccion de Memoria RAM (Hexadecimal): " << &miEntidad << endl;
cout << "=====================================================" << endl;
return 0;
}
