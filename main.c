#include "scanner.h"

int main()
{	

	do{

	token=get_token();

	switch (token.tipo) {
	case SEP:
	printf("Separador: %s \n",token.lexema);
	break;
	case CADENA:
	printf("Cadena: %s \n",token.lexema);
	break;
	case FDT:
	printf("Fin de Texto:");
	break;
	}

	}while(token.tipo != FDT);

	return 0;
}