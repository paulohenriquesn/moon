#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h" // include helpers in there
#include "interpreter.h" // include interpreter for run code

int parser(char *func, char * val) { // this function will inform what function interpreter will run
    function f; // new function
   if(strstr(func,"print")) { // if function name is print so call print interpreter func
       f.name = "print";
       f.value = val;
      return interpreter(f); // send function to intrepreter to run
   }
    return 1; // error function not found
}