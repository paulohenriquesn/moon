#ifndef MOON_LEXER_H
#define MOON_LEXER_H

#include <stdbool.h>
#include "token.h"
#include "dictionary.h"
#include "parser.h"

int readCode(char *);

int valueCheck(token);

#endif //MOON_LEXER_H
