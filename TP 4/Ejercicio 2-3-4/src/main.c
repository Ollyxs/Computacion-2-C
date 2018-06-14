#include "mult.h"

int main(int argc, char** argv){
	int i=0;
	char c;
	while((c=getopt(argc, argv, "s:f:"))!=-1){
        	switch(c){
        		case 's': 
				i = atoi(optarg);
				if(i != 0){
					i = i * 5;
					printf("El resultado es: %d \n", i);
				}
				else{
					printf("Valor incorrecto");
				}
        			break;
        		case 'f': 
				printf("Hola %s \n", optarg);
        			break;
        		default: 
        			printf("Argumentos no validos");
        			goto no_result;
					break;
				}
			}
	no_result:
	return 0;
}
