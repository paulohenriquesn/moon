#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char * name;
    char * value;
}function;

int interpreter(function func){
    if(strcmp(func.name,"print") == 0) { // if function is printer so call it
        printf("%s",func.value);
        return 0; // ok success
    }
    return 1; // error function doesn't exists
}