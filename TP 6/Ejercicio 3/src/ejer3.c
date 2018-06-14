#include "treshijos.h"

void main(int argc, char** argv){
	int i;
	for (int i=0;i<3;i++){
		if (fork() == 0){
        		printf( "Yo soy el hijo %d, mi padre es PID=%d, yo soy PID=%d\n", i+1, getppid(), getpid());
        		exit(0);
        	}
	}
    for (int i=0;i<3;i++){
		wait( NULL );
	}
}
