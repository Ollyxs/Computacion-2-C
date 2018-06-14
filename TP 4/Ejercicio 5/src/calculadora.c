#include "calculadora.h"

int main(int argc, char** argv){
	int i=0;
	float num1,num2, resultado;
	char op, c;
	float (*operacion)(float,float);
	while((c=getopt(argc, argv, "o:n:m:"))!=-1){
        	switch(c){
		        case 'o':
		            switch(*optarg){
					case '+': operacion=suma;
		        		   	  break;
					case '-': operacion=resta;
		        		   	  break;
					case '*': operacion=multiplicacion;
				        	  break;
					case '/': operacion=division;
		        			  break;
					}
			  	break;
		        case 'n':
			    num1=atoi(optarg);
		            break;
		        case 'm':
			    num2=atoi(optarg);
		            break;
		        default:
		            printf("Error de lectura\n");
		            goto no_result;
        	}	
	}
	resultado=(*operacion)(num1,num2);
	printf("Resultado: %.2f\n",resultado);
	no_result:
	return 0;
}
