* Programa: OperadorFlecha.cpp
Objetivo: Modificar valores de una estructura usando punteros.
*/
#include <iostream>
#include <cstring>
using namespace std;
struct ProyectoIntegrador {
int idGrupo;
char lenguajeBase[30];
int cantidadCommits;
};
// Función que recibe un PUNTERO a la estructura original
void actualizarDesarrollo(ProyectoIntegrador* ptrProyecto) {
// Usamos '->' porque ptrProyecto es un puntero (guarda una dirección de memoria)
ptrProyecto->cantidadCommits += 15; // Sumamos 15 commits en la memoria RAM real
// Copiamos el nuevo lenguaje en la dirección de memoria apuntada
strcpy(ptrProyecto->lenguajeBase, "C++ / UCRT64 Win11");
}
int main() {
// Creamos la estructura inicializada con datos de prueba
ProyectoIntegrador grupoCincoTres = {3, "Python Alternativo", 45};
cout << "=====================================================" << endl;
cout << " EJEMPLO 2: CONTROL DE MEMORIA CON OPERADOR (->) " << endl;
cout << "=====================================================" << endl;
cout << "=== VALORES PREVIOS A LA ACTUALIZACION ===" << endl;
cout << "Lenguaje del Grupo: " << grupoCincoTres.lenguajeBase << endl;
cout << "Commits en GitHub: " << grupoCincoTres.cantidadCommits << endl;
// Pasamos la DIRECCION de memoria usando '&'
actualizarDesarrollo(&grupoCincoTres);
cout << "\n=== VALORES ACTUALIZADOS DIRECTAMENTE EN LA RAM ===" << endl;
cout << "Lenguaje del Grupo: " << grupoCincoTres.lenguajeBase << endl;
cout << "Commits Actuales: " << grupoCincoTres.cantidadCommits << endl;
cout << "=====================================================" << endl;
return 0;
}
