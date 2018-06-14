#include "matriz.h"

int main(int argc,char **argv){
	int fil,col,menu;
	Matriz *mat1,*mat2,*resul;

	printf("Ingrese la cantidad de filas:\n");
	scanf("%d",&fil);

	printf("Ingrese la cantidad de columnas:\n");
        scanf("%d",&col);

	printf("Ingresar matriz 1\n");
	mat1=ingresarMatriz(fil,col);

	printf("Ingresar matriz 2\n");
	mat2=ingresarMatriz(fil,col);

	printf("\t\tQue operacion desea realizar?..\n \t(1)Suma matrices\n \t(2)Restar matrices\n");
	scanf("%d",&menu);
	while(menu<3){
		switch(menu){
			case 1:
				resul=sumarMatrices(mat1,mat2);
				mostrarMatriz(resul);
				menu=4;
				break;
			case 2:
				resul=restarMatrices(mat1,mat2);
				mostrarMatriz(resul);
				menu=4;
				break;
			default:
				printf("Opcion incorrecta,ingrese nuevamente\n");
				scanf("%d",&menu);
				break;
		}
	}
	return 0;
}
