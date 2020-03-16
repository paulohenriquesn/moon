#include "parser.h"

int parse(char *func, char *val) { // this function will inform what function interpreter will run
    printf("\nDEBUG: [FUNCTION] %s [VALUE] %s\n", func, val);
    function f; // new function
    //dic for call funcs to interpreter

    if (strstr(func, "str")) {
        f.name = "strnode";
        f.param = func;
        f.value = val;
    } else if (strstr(func, "print")) {
        f.name = "print";
        f.value = val;
    }

    return interpreter(f);  // error function not found
}
