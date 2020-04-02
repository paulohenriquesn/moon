#include "parser.h"

int parse(char *func, char *val) { // this function will inform what function interpreter will run
    //printf("\nDEBUG: [FUNCTION] %s [VALUE] %s\n", func, val);
    function f; // new function
    //dic for call funcs to interpreter
    f.value = val;
    if (strstr(func, "str")) {
        f.name = "strnode";
        f.param = func;
    } else if (strstr(func, "print")) {
        f.name = "print";
    } else if (strstr(func,"for")) {
        f.name = "for";
    }
     else if (strstr(func,"end")) {
        f.name = "end";
    }

    return interpreter(f);  // error function not found
}
