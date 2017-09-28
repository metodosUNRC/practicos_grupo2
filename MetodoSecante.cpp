//Grupo N�2 - Fraschetti Ignacio - Torres Franco
//
// Ejercicio1_Secante.cpp: define el punto de entrada de la aplicaci�n de consola.
//
// El siguiente programa determina las ra�ces por el m�todo de la secante  
//
// Este programa determina los cruces por cero de una funci�n, entre dos valores cercanos que se pedir�n ingresar, dentro de una tolerancia
// 
// El programa pide al usuario ingresar:
//		Un valor inicial ubicado a la derecha de la ra�z (xd);
//		Un valor inicial ubicado a la izquierda de la ra�z (xi);		
//		La tolerancia que permitir� cortar el programa cuando el valor obtenido sea menos o igual a esta; 
//		El n�mero de iteraciones m�ximo a realizarse.
//		     
//------------------------------------------------------------------------------------------------------------------------
#include "stdafx.h"																			 //
#include <iostream>																			 // Librerias Utilizadas
#include <cmath>														  				     //
#include <iomanip>																			 //
using namespace std;
double f(double);																			 //Se define el tipo de variable de la funci�n y su argumento.
int main()
{
	double xd, xi, tolerancia, raiz, error;													 //Se definen los tipos de variables a usar.

	int k = 1, kmax;																		 //Se definen los tipos de variables a usar.
	cout << " Ingrese el valor inicial ubicado a la derecha de la raiz, xd= \n " << endl;    // Se pide el ingreso del valor aproximado a la ra�z que se ubica a la derecha.
	cin >> xd;																				 // Se asignan las variables a los valores ingresados.
	cout << " Ingrese el valor inicial ubicado a la izquierda de la raiz, xi= \n " << endl;  // Se pide el ingreso del valor aproximado a la ra�z que se ubica a la izquierda.
	cin >> xi;																				 // Se asignan las variables a los valores ingresados.
	cout << " Ingrese la tolerancia del resultado= \n " << endl;							 // Se pide el ingreso de la tolerancia del resultado.
	cin >> tolerancia;																		 // Se asignan las variables a los valores ingresados.
	cout << " Ingrese el valor maximo de iteraciones, kmax= \n " << endl;					 // Se pide el ingreso de valor maximo de iteraciones.
	cin >> kmax;																			 // Se asignan las variables a los valores ingresados.
//
// Comienza el loop.
//
	while (k <= kmax)
	{
		raiz = xd - ((f(xd)*(xd - xi)) / (f(xd) - f(xi)));									 //Se calcula la aproximacion al valor real de la raiz de la funcion.
		error = (abs(f(xi)) - abs(f(xd)));													 //Se calcula el error entre los valores laterales evaluados.
		if (abs(raiz - xd)<tolerancia)
		{
			cout << " La aproximacion a la raiz en la iteracion " << k << " es = " << raiz << " , con un error de " << error << endl;//Se muestran los valores obtenidos.
		}
		k++;																				 // Contador (cumple la funcion de hacer k=k+1).
		xi = xd;																			 // Se redefine la variable.
		xd = raiz;																			 // Se redefine la variable.
	}																	                     // Fin while.
	cout << "SE LLEGO AL NUMERO MAXIMO DE ITERACIONES" << endl;								 // Se muestra que se termina el programa porque se lleg� al numero m�ximo de iteraciones.
	return 0;
}																							 // Fin del Programa.
//    
// A continuacion, defino la funcion.
//
double f(double x)
{
	return (0.95*pow(x,3)-5.9*pow(x,2)+10.9*x-6);
}

