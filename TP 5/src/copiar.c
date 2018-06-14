#include "tpcopiar.h"

int main (int argc, char** argv){
	int fe, fs, length=0, flag=0;
	char buf[1024];
	while(flag==0){
		if((fe=open(argv[1],O_RDONLY))<0){
			printf("El archivo no se pudo abrir, ingrese el nombre nuevamente:\n");
			scanf("%s", argv[1]);
		}
		else{
			fs=open("copia.txt", O_WRONLY|O_CREAT|O_TRUNC, 0666);
			while((length=read(fe,buf,1024))>0)
			write(fs,buf,length);
			flag++;
		}
	}
	close(fe);
	close(fs);
	return 0;
}
