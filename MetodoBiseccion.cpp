// Grupo N°2 - Fraschetti Ignacio - Torres Franco
//
// Ejercicio1_Biseccion.cpp: define el punto de entrada de la aplicación de consola.
//
// El siguiente programa determina las raíces por el método de bisección
//
// Este programa determina los cruces por cero de una función en un intervalo dado [a,b], dentro de una tolerancia especificada 
//
// El programa pide al usuario ingresar:
//		Los limites alrededor de la raíz;
//		La tolerancia del resultado; 
//		El número de iteraciones máximas.
//------------------------------------------------------------------------------------------------------------------------


#include "stdafx.h"  //
#include <iostream>  // Librerías Usadas
#include <cmath>     //
#include <iomanip>   //
using namespace std;
double f(double);    // Se define el tipo de variable de la función y su argumento.
int main()
{
	 int kmax;       // para el numero de iteraciones máximas.
	 double a;       // 
	 double b;       // Se define el tipo de variable.
	 double eps;     // 
	 cout << "Ingrese el valor de a (limite izquierdo)\n" << endl; // se pide el ingreso del límite izquierdo.
	 cin >> a;                                                     // se asignan las variables a los valores ingresados.
	 cout << "ingrese el valor de b (limite derecho)\n" << endl;   // se pide el ingreso del límite derecho:
	 cin >> b;                                                     // se asignan las variables a los valores ingresados.
	 cout << "Ingrese el valor de tolerancia\n" << endl;           // se pide el ingreso de la tolerancia.
	 cin >> eps;                                                   // se asignan las variables a los valores ingresados.
	 cout << "Ingrese el número máximo de iteraciones\n" << endl;  // se pide el ingreso del número máximo de iteraciones.
	 cin >> kmax;                                                  // se asignan las variables a los valores ingresados.
	 		cout << "Los valores ingresados son:" << endl;         // para comprobar, se muestran los valores ingresados.
			cout << "  a = " << a << "  b = " << b << "  tolerancia = " << eps << "  kmax = " << kmax << endl;
		 int k = 1;												   // se define el tipo de variables a usar
		 double x = 0.5*(a + b);
//
// Comienza el loop.
//
		 if ((f(b)*f(a)) < 0)	  //multiplico para ver el signo.
		 {
			 cout << "" << endl;  //solo para generar un espacio en la Consola. (no influye en el programa)
			 cout << "A modo de tabla, para cada iteracion se obtuvo:" << endl;
			 while (k <= kmax && (abs(b - a) > eps))
			 {
				 cout << " Iteracion Numero= " << k << " a= " << a	<< "	b= " << b	<< "	fa= " << f(a)	<< "	fb= " << f(b)	<< "	Error= " << abs(b - a) << endl;
				 if (f(x)*f(a) <= 0)
					{
						b = x;
					}
				else
					{
						a = x;
					}
					x = 0.5*(b + a);
					k++;			// Contador (cumple la función de hacer k=k+1).
			}						// Fin while.
			 cout << "" << endl;	//solo para generar un espacio en la Consola. (no influye en el programa)
			 if ((abs(x - a)) <= (abs(x - b)))
			 {
				 cout << " La raíz de la función es r = " << a << endl; // Muestra la raíz encontrada.
			 }
			 else
			 {
				 cout << " La raíz de la función es r =" << b << endl;  // Muestra la raíz encontrada.
			 }

			 cout << " Se hicieron " << k-1 <<" iteraciones. " << endl; // Muestra la cantidad de iteraciones realizadas.
		 }                                                       
		 else
		 {
			 cout << " La función no cambia de signo en este intervalo [a,b]. Intente nuevamente. "<< endl;
		 }
	return 0;  
}						  // Fin del Programa.
//    
// A continuación, defino la función.
//
double f(double x)
{
	return (x*sin(x) - 1);
}

