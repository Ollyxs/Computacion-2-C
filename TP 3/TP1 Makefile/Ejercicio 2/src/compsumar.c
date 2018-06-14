#include "complejos.h"

complejo sumar (complejo comp1, complejo comp2){
	complejo comptotal;
	comptotal.real = comp1.real + comp2.real;
	comptotal.imag = comp1.imag + comp2.imag;
	return comptotal;
}

