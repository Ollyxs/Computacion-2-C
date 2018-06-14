APP=calculadora
CC=gcc
CFLAGS=-I ../include/
ODIR=../obj
IDIR=../include
_DEPS=calculadora.h
_OBJ=calculadora.o suma.o resta.o multiplicacion.o division.o datos.o
DEPS=$(patsubst %, $(IDIR)/%, $(_DEPS))
OBJ=$(patsubst %, $(ODIR)/%, $(_OBJ))

calculadora:	$(OBJ)
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
