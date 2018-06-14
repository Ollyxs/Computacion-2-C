#include "padrehijo.h"

void main(int argc, char** argv){
	char cad1[20]="Soy el hijo", cad2[20]="Soy el padre";
	int i;
	if(!fork()){
		for(i=0;i<5;i++){
			printf("%s\n",cad1);
		}
	}
	else{
		for(i=0;i<2;i++){
			printf("%s\n",cad2);
		}
		wait(NULL);
		printf("Mi proceso hijo termino\n");
	}
}
