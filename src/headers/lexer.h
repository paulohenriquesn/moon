#include <stdlib.h>
#include <stdio.h>

#include "token.h" // include tokens
#include "helpers.h" // include helpers


int valueCheck(token token_);

int readCode (char* line) { // function that will read code and separate tokens
int pointerToken = 0; // pointer that will access tokens data

bool valueCollector = false; //change route for token to collect values instead of chars

   for( int i=0; i < (sizeof(line)+255); i++){

     if(valueCollector == false){ // if valueCollect is false so collect chars for token
      token token_ = dictionary(line[i]); // get token of chars
        if(valueCheck(token_) == 0) { // if token char is to store value so get it
          valueCollector = true;
        }
     }else { // if isn't a value get so run the code

      token token_ = dictionary(line[i]); // inverse until find the end value
        if(valueCheck(token_) == 0) { // if token char is to store value so get it
          valueCollector = false;
        }else{
          printf("%c",line[i]);
        }
     }

   }

}

int valueCheck(token token_) {
  if(token_.valuefinder == true) {
    return 0;
  }
  return 1;
}