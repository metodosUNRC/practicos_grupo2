// Grupo N�2 - Fraschetti Ignacio - Torres Franco
//
// Ejercicio1_Biseccion.cpp: define el punto de entrada de la aplicaci�n de consola.
//
// El siguiente programa determina las ra�ces por el m�todo de bisecci�n
//
// Este programa determina los cruces por cero de una funci�n en un intervalo dado [a,b], dentro de una tolerancia especificada 
//
// El programa pide al usuario ingresar:
//		Los limites alrededor de la ra�z;
//		La tolerancia del resultado; 
//		El n�mero de iteraciones m�ximas.
//------------------------------------------------------------------------------------------------------------------------


#include "stdafx.h"  //
#include <iostream>  // Librer�as Usadas
#include <cmath>     //
#include <iomanip>   //
using namespace std;
double f(double);    // Se define el tipo de variable de la funci�n y su argumento.
int main()
{
	 int kmax;       // para el numero de iteraciones m�ximas.
	 double a;       // 
	 double b;       // Se define el tipo de variable.
	 double eps;     // 
	 cout << "Ingrese el valor de a (limite izquierdo)\n" << endl; // se pide el ingreso del l�mite izquierdo.
	 cin >> a;                                                     // se asignan las variables a los valores ingresados.
	 cout << "ingrese el valor de b (limite derecho)\n" << endl;   // se pide el ingreso del l�mite derecho:
	 cin >> b;                                                     // se asignan las variables a los valores ingresados.
	 cout << "Ingrese el valor de tolerancia\n" << endl;           // se pide el ingreso de la tolerancia.
	 cin >> eps;                                                   // se asignan las variables a los valores ingresados.
	 cout << "Ingrese el n�mero m�ximo de iteraciones\n" << endl;  // se pide el ingreso del n�mero m�ximo de iteraciones.
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
					k++;			// Contador (cumple la funci�n de hacer k=k+1).
			}						// Fin while.
			 cout << "" << endl;	//solo para generar un espacio en la Consola. (no influye en el programa)
			 if ((abs(x - a)) <= (abs(x - b)))
			 {
				 cout << " La ra�z de la funci�n es r = " << a << endl; // Muestra la ra�z encontrada.
			 }
			 else
			 {
				 cout << " La ra�z de la funci�n es r =" << b << endl;  // Muestra la ra�z encontrada.
			 }

			 cout << " Se hicieron " << k-1 <<" iteraciones. " << endl; // Muestra la cantidad de iteraciones realizadas.
		 }                                                       
		 else
		 {
			 cout << " La funci�n no cambia de signo en este intervalo [a,b]. Intente nuevamente. "<< endl;
		 }
	return 0;  
}						  // Fin del Programa.
//    
// A continuaci�n, defino la funci�n.
//
double f(double x)
{
	return (x*sin(x) - 1);
}

