#include "sumapunt.h"
void main(int argc, char**argv)
{
	int num[2];
	int *ptr_num;
	ptr_num = num;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", ptr_num);
	printf("Ingrese el segundo numero: ");
	scanf("%d", ptr_num+1);
	sumapunt(ptr_num);
	mosdir(ptr_num);
}
