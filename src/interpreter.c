#include "interpreter.h"

int pointer_str = 0;
str_node str_store[MEMORY_VARS];

int interpreter(function func) {
    if (strcmp(func.name, "strnode") == 0) {
        char *valueStr = malloc(255 * sizeof(char)); //store value name of var

        for (int i = 5; i < sizeof(func.param) + 100; i++) { // here get char and put on str valueStr
            valueStr[i] = func.param[i];
            strncat(valueStr, &func.param[i], 1); // here it will store on valueStr each char
        }

        //Here I'm making a node to store the var
        str_node var;
        var.pointer = pointer_str;
        var.value = func.value;
        var.name = valueStr;

        //store on array of vars (str)
        str_store[pointer_str] = var;
        printf("\nDEBUG: var %s stored with value %s\n", valueStr, var.value);
    }

    if (strcmp(func.name, "print") == 0) { // if function is printer so call it
        puts(func.value);
        return 0; // ok success
    }

    return 1; // error function doesn't exists
}
