#include "complejos.h"

void toString (char *cad,complejo compsuma){
	sprintf(cad,"%d + (%d) i", compsuma.real, compsuma.imag);
}
