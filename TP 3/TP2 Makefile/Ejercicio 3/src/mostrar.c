#include "matriz.h"
void mostrarMatriz(Matriz* resultado){
	int i=0,n=0;
	n= resultado->filas * resultado->columnas ;
	for(i=0;i < n;i++){
		printf("%d\t",*(resultado->valores+i));
		if((i+1)%resultado->filas==0){
			printf("\n");
		}
	}
}

