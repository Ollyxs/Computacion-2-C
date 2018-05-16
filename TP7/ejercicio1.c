#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void manejadorCTRLC(int s);

int main(int argc, char **argv){
	signal(SIGINT, manejadorCTRLC);
	sleep(1000);
	signal(SIGINT,SIG_DFL);
	sleep(1000);
	return 0;
}

void manejadorCTRLC(int s){
	printf("\nEsta vez no me saldré, inténtalo nuevamente\n");
	}
