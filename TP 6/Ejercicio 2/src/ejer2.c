#include "disputa.h"

void main(int argc, char **argv){
	if(!fork()){ //hijo
		printf("Yo soy el hijo y digo que el valor es: %d\n",(atoi(argv[1]))+2);		
	}
	else{
		printf("Yo soy el padre y digo que el valor es: %d\n",(atoi(argv[1]))+4);		
	}
}
