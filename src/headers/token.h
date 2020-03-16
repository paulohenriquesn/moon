#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "helpers.h"

typedef struct {
    char* name;
    char* type;
    bool valuefinder;
}token;

token dictionary ( char type ) { // this function will tag a char if it is on dic if isn't so ignore.
    token result = {"\0","\0"}; // create a token with 0x 0x (null)
        switch(type){
                
                //Plus or Concat
            case '+':
                result.name = "plus";
                result.type = "+";
            return result;
            break;
                //Key Finder
            case '"':
                result.name = "strkey";
                result.type = "\"";
                result.valuefinder = true;
                return result;
            break;
                
        }
    return result; // so if is an char dic so return it for us
}
