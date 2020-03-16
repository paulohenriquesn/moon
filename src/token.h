#ifndef TOKEN_H
#define TOKEN_H

#include <stdbool.h>
#include "helpers.h"

typedef struct token {
    char *name;
    char *type;
    bool valuefinder;
} token;

#endif // TOKEN_H
