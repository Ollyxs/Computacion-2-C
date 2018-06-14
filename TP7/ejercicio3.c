#ifndef PINGPONG_H
	#include <stdio.h>
	#include <stdlib.h>
	#include <sys/wait.h>
	#include <signal.h>
	#include <unistd.h>
#define PINGPONG_H
#endif

void ping(int s);
void pong(int p);
int flag = 1;

int main(int argc, char** argv){
	int estado, pid1, pid2;
	if((pid1=fork())!=0){
        	signal(SIGUSR1, ping);
        	while(flag);
	}
	else{
        	sleep(2);
        	kill(getppid(),SIGUSR1);
		wait(&estado);
	}
	if((pid2=fork())==0){
		signal(SIGUSR1, pong);
		while(flag);
	}
	else{
		sleep(2);
		kill(pid2, SIGUSR1);
		wait(&estado);
	}
}

void ping(int s){
	while(s==SIGUSR1){
		printf("Soy el hijo 1, mi PID es=%d: PING\n",getpid());
		sleep(5);
	}
	flag=0;
}
void pong(int p){
	while(p==SIGUSR1){
		printf("Soy el hijo 2, mi PID es=%d: PONG\n",getpid());
		sleep(5);
	}
	flag=0;
}
