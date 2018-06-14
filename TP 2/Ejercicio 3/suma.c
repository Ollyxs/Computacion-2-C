#include "matriz.h"

Matriz* sumarMatrices(Matriz* mat1, Matriz* mat2){
	int i=0,n=0;
	Matriz *suma;
	suma=(Matriz *)malloc(sizeof(Matriz));
	n= mat1->filas * mat1->columnas;
	suma->valores=(int *)malloc(sizeof(int)*n);
	suma->filas=mat1->filas;
	suma->columnas=mat1->columnas;
	for(i = 0; i < n; i++){
		suma->valores[i]=mat1->valores[i] + mat2->valores[i];	
	}
	return suma;
}
