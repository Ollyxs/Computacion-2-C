
#include "sumapunt.h"

void sumapunt(int *ptr_num)
{
	int total;

	total = *(ptr_num) + *(ptr_num+1);
	printf("El total de la suma es: %d\n", total);

}
