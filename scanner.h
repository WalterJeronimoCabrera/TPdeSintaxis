#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum Tokens {FDT , SEP, CADENA};
struct token {
	char tipo;
	char lexema[128];
};
struct token get_token();

struct token token;

#endif // SCANNER_H_INCLUDED