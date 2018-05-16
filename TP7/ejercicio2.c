#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void manejadorUSR1(int s);

int main(int argc, char **argv){
	int pid = fork();
	if(!pid){  //hijo
		signal(SIGUSR1, manejadorUSR1);
		while(1){
			printf("H esperando\n");
			pause();
		}
	}
	else{ //padre
		while(1){
		printf("P esperando\n");
		kill(pid,SIGUSR1);
		sleep(5);
		}
	}
	return 0;
}

void manejadorUSR1(int s){
	printf("Hijo vivo\n");
}
