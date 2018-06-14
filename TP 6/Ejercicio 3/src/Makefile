CC=gcc
CFLAGS=-I ../include/

APP=treshijos
ODIR=../obj
IDIR=../include

_DEPS=treshijos.h
_OBJ=ejer3.o

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
