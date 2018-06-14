#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>

int flag=1;
int pid, status;
void handler(int signal);

int main(int argc, char** argv){
	pid_t padre = getpid();
	pid_t pid;
	int s;
	for(s=1;s<=3;s++){
	pid=fork();
		if(pid){
			printf(" proceso padre %d\n",getpid());
			signal(SIGUSR1,handler);
			sleep(2);
		}
		else{
			printf("hijo %d %d, mi papa es %d\n",s, getpid(), getppid());
			printf("Estado %d\n",status);
			sleep(2);
			exit(0);
			}
	}
	return 0;
}

void handler(int signal){
	if(signal==SIGUSR1){
		printf("Recibí señal de mi padre: %d, yo soy el hijo %d\n", getppid(),getpid());
		kill(pid,signal);
		sleep(1);
	}
}


