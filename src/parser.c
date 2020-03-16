#include "headers/function.h"
#include "interpreter.c"

int parser(char *func, char *val)
{ // this function will inform what function interpreter will run
    printf("\n\nDEBUG: [FUNCTION] %s [VALUE]%s\n", func, val);
    function f; // new function
    //dic for call funcs to interpreter
    if (strstr(func, "str"))
    {
        f.name = "strnode";
        f.param = func;
        f.value = val;
    }
    if (strstr(func, "print"))
    { 
        f.name = "print";
        f.value = val;
    }
    return interpreter(f);  // error function not found
}