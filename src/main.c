#include <stdio.h>
#include <string.h>
#include "lexer.c" // includes lexer header into the script
#include "helpers.h"

int main(int argc, char *argv[]) {
    char *file = (argc > 1) ? argv[1] : "../example.moon";
    FILE *script_file = fopen(file, "r"); //Read Moon Script File

    if (script_file == NULL) { // check if script has code in there
        printf("ERROR: Script %s not found.\n", file);
        return 1;
    }

    char *linecode = malloc(sizeof(char) * MEMORY_CHAR_LINECODE); //allocate memory for linecodes

    int pline = 0; // pointer line check

    char ch;
    while ((ch = fgetc(script_file)) != EOF) { // check all lines and send it for lexer
        if (ch == ';') {
            readCode(linecode); // interpreter line on lexer
            memset(linecode, '\0', MEMORY_CHAR_LINECODE); // clear memory putting \0 in there
            free(linecode);     // deallocate memory of line
            pline = 0;          // reset line check
        } else {
            linecode[pline] = ch; // allocate char til finds semicolon
            pline++;              //line check until finds semicolon
        }
    }

    return 0;
}
