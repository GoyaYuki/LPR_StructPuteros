/* Programa: ModeladoSencillo.cpp
Objetivo: Aprender a declarar y usar una estructura básica.
*/
#include <iostream>
#include <cstring> // Requerida para usar strcpy (copiar texto en arreglos de char)
using namespace std;
// 1. Diseñamos la "ficha" o estructura global
struct ComponenteProyecto {
int idCodigo; // Identificador (entero)
char nombreModulo[50]; // Nombre (cadena de caracteres estilo C)
float porcentajeAvance;// Avance del proyecto (decimal)
};
int main() {
// 2. Creamos una variable usando nuestra estructura
ComponenteProyecto moduloBase;
// 3. Asignamos valores a cada campo usando el punto (.)
moduloBase.idCodigo = 101;
moduloBase.porcentajeAvance = 85.5f; // La 'f' indica que es float
// IMPORTANTE: En cadenas de tipo char[] de C, no podemos usar "=".
// Usamos strcpy para copiar el texto de forma segura en las celdas de memoria.
strcpy(moduloBase.nombreModulo, "Modulo de Autenticacion API");
cout << "=====================================================" << endl;
cout << " EJEMPLO 1: MODELADO DE DATOS ESTRUCTURADOS " << endl;
cout << "=====================================================" << endl;
// 4. Mostramos los datos en pantalla
cout << "Codigo de Modulo: " << moduloBase.idCodigo << endl;
cout << "Nombre Asignado: " << moduloBase.nombreModulo << endl;
cout << "Avance Registrado: " << moduloBase.porcentajeAvance << "%" << endl;
cout << "=====================================================" << endl;
return 0;
}