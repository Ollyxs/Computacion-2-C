#include "matriz.h"

Matriz* ingresarMatriz(int fil,int col){
	Matriz	*mat;
	int i=0,n=0;

	mat=(Matriz *)malloc(sizeof(Matriz));
	mat->filas=fil;
	mat->columnas=col;

	n=mat->filas * mat->columnas;
	mat->valores=(int *)malloc(sizeof(int)*n);

	printf("Introduzca los numeros \n");
	for(i = 0; i < n; i++){
		scanf("%d",mat->valores+i);
	}

	return mat;
}
