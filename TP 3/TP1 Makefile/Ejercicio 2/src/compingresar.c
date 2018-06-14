#include "complejos.h"

complejo ingresar(){
	complejo comp;
	printf("Ingrese parte real del numero complejo: ");
	scanf("%d",&comp.real);
	printf("Ingrese parte imaginaria del numero complejo: ");
	scanf("%d",&comp.imag);
	return comp;
}

