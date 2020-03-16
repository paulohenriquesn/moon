#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "helpers.h"

typedef struct {
    char* name;
    char* type;
    bool valuefinder;
}token;

token dictionary ( char type ) {
    token result = {"\0","\0"};
        switch(type){
            case '+':
                result.name = "plus";
                result.type = "+";
            return result;
            break;
            case '"':
                result.name = "strkey";
                result.type = "\"";
                result.valuefinder = true;
                return result;
            break;
        }
    return result;
}