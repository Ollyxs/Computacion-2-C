APP=sumacomp
CC=gcc
CFLAGS=-I ../include/
ODIR=../obj
IDIR=../include
_DEPS=complejos.h
_OBJ=main.o compingresar.o compsumar.o mostrar.o toString.o
DEPS=$(patsubst %, $(IDIR)/%, $(_DEPS))
OBJ=$(patsubst %, $(ODIR)/%, $(_OBJ))

sumacomp:	$(OBJ)
	$(CC) -o $(APP) $(OBJ)


$(ODIR)/%.o:	%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# % se sustituye con el nombre del archivo
# $@ lo que esta a la izquierda del ':'
# $< el primer argumento de la derecha del ':'
# $^ toda la lista de la derecha de ':'

clean:
	rm -f $(APP) $(ODIR)/*.o

install:
	/bin/cp $(APP) /usr/local/bin/

uninstall:
	/bin/rm /usr/local/bin/$(APP)
