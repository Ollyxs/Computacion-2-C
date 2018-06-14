#include "saludar.h"

int main(int argc, char** argv){
	char c;
	while((c=getopt(argc, argv, "i"))!=-1){
        	switch(c){
        		case 'i': saludo();
        			break;
        		default: despedida();
        			goto no_result;
					break;
				}
			}
	no_result:
	return 0;
}
