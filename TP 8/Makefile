CC=gcc
CFLAGS=-I ../include/

APP=matriz
ODIR=../obj
IDIR=../include

_DEPS=matriz.h
_OBJ=matriz.o suma.o resta.o mostrar.o ingresar.o

DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(APP): $(OBJ)
	$(CC) -o $(APP) $(OBJ)

$(ODIR)/%.o: 	%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm $(APP) $(ODIR)/*.o

install:
	/bin/cp $(APP) /usr/local/bin/

uninstall:
	/bin/rm  /usr/local/bin/$(APP)
