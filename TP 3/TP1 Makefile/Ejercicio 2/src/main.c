#include "complejos.h"
void main(int argc, char** argv){
	complejo comp1, comp2, compsuma;
	char cad[30];
	printf("\t--------Suma dos Numeros Complejos--------\n");
	printf("-Ingrese el primer complejo:\n");
	comp1 = ingresar();
	printf("-Ingrese el segundo complejo:\n");
	comp2 = ingresar();
	compsuma = sumar(comp1,comp2);
	toString(cad, compsuma);
	mostrar(cad);
}
