//Grupo N°2 - Fraschetti Ignacio - Torres Franco
//
// Ejercicio1_NewtonRaphson.cpp: define el punto de entrada de la aplicación de consola.
//
// El siguiente programa determina las raíces por el método Newton-Raphson
// Este programa determina los cruces por cero de una función, en un valor cercano al que se pedirá ingresar, dentro de una tolerancia. 
// 
// El programa pide al usuario ingresar:
//		Un valor inicial aproximado (x0);		
//		La tolerancia que permitirá cortar el programa cuando el valor obtenido sea menos o igual a esta; 
//		El número de iteraciones máximo a realizarse.
//		     
//------------------------------------------------------------------------------------------------------------------------													  //
#include <iostream>														  // Librerías Usadas
#include <cmath>													      //
#include <iomanip>														  //
using namespace std;

double f(double);														  // Se define el tipo de variable de la función y su argumento.
double g(double);														  // Se define el tipo de variable de la derivada de la función y su argumento.

int main()
{
	double error, x0, tolerancia, x;									  // Se definen los tipos de variables a usar.
	int k = 0, kmax;												      // Se definen los tipos de variables a usar. 

	cout << " Ingrese el valor de inicial aproximado, x0= \n " << endl;   // Se pide el ingreso del valor inicial, aproximado a la raíz.
	cin >> x0;															  // Se asignan las variables a los valores ingresados.
	cout << " Ingrese la tolerancia del resultado= \n " << endl;		  // Se pide el ingreso de la tolerancia del resultado.
	cin >> tolerancia;													  // Se asignan las variables a los valores ingresados.
	cout << " Ingrese el valor maximo de iteraciones, kmax= \n " << endl; // Se pide el ingreso de valor maximo de iteraciones.
	cin >> kmax;														  // Se asignan las variables a los valores ingresados.
//
// Comienza el loop.
//	
	while (k <= kmax)
	{
		x = x0 - (f(x0) / (g(x0)));										   // Se calcula el supuesto valor real de la raiz de la funcion.
		error = (abs(x0) - abs(x));										   // Se calcula el error.
		if (abs(x - x0) < tolerancia)
		{
			cout << "El valor aproximado de la raiz en la iteracion " << k << " es = " << x << ", con un error de " << error << endl; // Se muestran los valores obtenidos.
			break;
		}
		k++;															   // Contador (cumple la funcion de hacer k=k+1).
		x0 = x;															   // Se redefine x0.
	}																	   // Fin while.
	cout << "SE LLEGO AL NUMERO MAXIMO DE ITERACIONES" << endl;			   // Se advierte que se termina el programa porque se llegó al numero máximo de iteraciones.
	system("pause");
	return 0;
}																		   // Fin del Programa.
//    
// A continuacion, defino la funcion y la derivada primera de la funcion.
//
double f(double x)
{						
	return (-pow(x,2)+1.8*x+2.5); 
}
double g(double x)
{                     
	return (-2*x+1.8);                    
}

