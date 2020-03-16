#include <stdlib.h>
#include <stdio.h>

#include "headers/lexer.h"

int main(int argc, char* argv[]){
    
    char *linecode = malloc(sizeof(char) * 1024);

    char ch;
    FILE *script_file = fopen("test.moon","r"); //Read Moon Script File
    
     if(script_file == NULL){ // check if script there's a code in there
        return 1;
    }

    int pline = 0; // pointer line check

   while((ch = fgetc(script_file)) != EOF){ // check all lines and send it for lexer
      
      if (ch == ';'){
          readCode(linecode); // interpreter line on lexer
          free(linecode); // desalocate memory of line
          pline = 0; // reset line check
      }else{
          linecode[pline] = ch; // alocate char til finds semicolon
          pline++; //line check until finds semicolon
      }

   }
    return 0;
}