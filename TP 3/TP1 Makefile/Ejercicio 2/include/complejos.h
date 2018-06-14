/**
*@file complejos.h
*@author Julian Campana
*@date 27/03/2018
*@brief Archivo de Prototipo de Suma de Dos Complejos
*/
/**ACLARACION
*Se ha modificado el header para poder resolver
*el problema de otra manera, se ha modificado el 
*mostrar para que reciba una dato del tipo puntero caracter
*y el toString para que no devuelva un dato y reciba ademas
*un puntero del tipo char
*/
#ifndef COMPLEJO_H

	#define COMPLEJO_H

		#include<stdio.h>
		typedef struct {
			int real;
			int imag;
		} complejo;
		
		complejo ingresar ();
		complejo sumar (complejo, complejo);
		void mostrar (char*);
		void toString (char*, complejo);
		
#endif // COMPLEJO_H
