#include "matriz.h"
Matriz* restarMatrices(Matriz* mat1, Matriz* mat2){
	int i=0,n=0;
	Matriz *resta=NULL;
	resta=(Matriz *)malloc(sizeof(Matriz));
	n= mat1->filas * mat1->columnas;
	resta->valores=(int *)malloc(sizeof(int)*n);
	resta->filas=mat1->filas;
	resta->columnas=mat1->columnas;

	for(i = 0; i < n; i++){
		resta->valores[i]=mat1->valores[i] - mat2->valores[i];
	}
	return resta;
}
