
#include "mostrardirmem.h"

void mostrar(int *ptr_num)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("Posicion en el Vector: %d \n Valor: %d \n Direccion de Memoria %p \n", i, *(ptr_num+i), (ptr_num+i));
	}
}
