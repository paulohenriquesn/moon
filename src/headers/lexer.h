#include <stdlib.h>
#include <stdio.h>

#include "token.h" // include tokens
#include "helpers.h" // include helpers
#include "parser.h" // include parser


int valueCheck(token token_);

int readCode (char* line) { // function that will read code and separate tokens

char *func = malloc(1024*sizeof(char)); // func allocate
char *value = malloc(1024*sizeof(char)); // value allocate

int pointerToken = 0; // pointer for store func name on char malloc
int pointerValueToken = 0; // pointer for store value on char malloc

bool valueCollector = false; //change route for token to collect values instead of chars

   for( int i=0; i < (sizeof(line)+255); i++){
     if(valueCollector == false){ // if valueCollect is false so collect chars for token
      token token_ = dictionary(line[i]); // get token of chars
        if(valueCheck(token_) == 0) { // if token char is to store value so get it
          valueCollector = true;
        }else{
           func[pointerToken] = line[i]; // store func name on allocated memory
           pointerToken++;
        }
     }else { // if isn't a value get so run the code

      token token_ = dictionary(line[i]); // inverse until find the end value
        if(valueCheck(token_) == 0) { // if token char is to store value so get it
          valueCollector = false;
        }else{
          value[pointerValueToken] = line[i]; // store value on allocated memory
          pointerValueToken++;
        }
     }

   }

  parser(func,value); // check if there is error if not so pass next turn

  free(value); // free memory alocated
  free(func); // free memory allocated
  return 0;

}

int valueCheck(token token_) {
  if(token_.valuefinder == true) {
    return 0;
  }
  return 1;
}