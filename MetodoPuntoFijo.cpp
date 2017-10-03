//Grupo N°2 - Fraschetti Ignacio - Torres Franco
//
// Ejercicio1_PuntoFijo.cpp: define el punto de entrada de la aplicación de consola.
//
// El siguiente programa determina las raíces por el método de punto fijo
//
// Este programa determina los cruces por cero de una función, ingresando un valor aproximado dentro de una tolerancia especificada 
//  
// El programa pide al usuario ingresar:
//		Un valor inicial (x0) de la raíz;
//		La tolerancia del resultado; 
//		El número de iteraciones máximo a realizarse.
//		
//------------------------------------------------------------------------------------------------------------------------											      //
#include <iostream>														  // Librerías Utilizadas
#include <cmath>														  //
#include <iomanip>														  //
using namespace std;
double f(double);														  // Se define el tipo de variable de la función y su argumento.
double g(double);														  // Se define el tipo de variable de la derivada de la función y su argumento.
int main()
{
	double x0, tolerancia, raiz, error;									  // Se definen los tipos de variables a usar.
	int n = 1, kmax;													  // Se definen los tipos de variables a usar.

	cout << " Ingrese el valor de inicial de la raiz, x0= \n " << endl;   // Se pide el ingreso del valor inicial, aproximado a la raíz.
	cin >> x0;															  // Se asignan las variables a los valores ingresados.
	cout << " Ingrese la tolerancia del resultado= \n " << endl;		  // Se pide el ingreso de la tolerancia del resultado.
	cin >> tolerancia;													  // Se asignan las variables a los valores ingresados.
	cout << " Ingrese el valor maximo de iteraciones, kmax= \n " << endl; // Se pide el ingreso de valor maximo de iteraciones.
	cin >> kmax;														  // Se asignan las variables a los valores ingresados.
//
// Comienza el loop.
//	
	while (n <= kmax)
	{
		raiz = g(x0);													  // Se calcula el supuesto valor real de la raiz de la funcion.
		error = (abs(x0) - abs(raiz));									  // Se calcula el error.
		if (abs(raiz - x0)<tolerancia)
		{
			cout << "El valor aproximado de la raiz en la iteracion " << n << " es = " << raiz << ", con un error de " << error << endl; // Se muestran los valores obtenidos.
		}
		n++;															  // Contador (cumple la funcion de hacer k=k+1).
		x0 = raiz;														  // Se redefine x0.
	}																	  // Fin while.
	cout << "SE LLEGO AL NUMERO MAXIMO DE ITERACIONES" << endl;			  // Se advierte que se termina el programa porque se llegó al numero máximo de iteraciones.
	return 0;
}																		  // Fin del Programa.
//    
// A continuacion, defino la funcion y la derivada primera de la funcion.
//
double f(double x)
{
	return (pow(x,2)-2*x-3);   
}
double g(double x)
{
	return (sqrt((2 * x) + 3));
}

