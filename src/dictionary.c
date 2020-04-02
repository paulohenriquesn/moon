#include "dictionary.h"

token dictionary(char type) { // this function will tag a char if it is on dic if isn't so ignore.
    token result = {"\0", "\0", false}; // create a token with 0x 0x (null)

    switch (type) {
        //Plus or Concat
        case '+':
            result.name = "plus";
            result.type = "+";
            break;
            //Key Finder
        case '"':
            result.name = "strkey";
            result.type = "\"";
            result.valuefinder = true;
            break;
            //Another Key Finder
        case '&':
            result.name = "catchvalue";
            result.type = "&";
            result.valuefinder = true;
            break;
    }

    return result; // so if is an char dic so return it for us
}
