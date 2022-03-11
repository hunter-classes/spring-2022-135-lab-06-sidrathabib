#include <iostream>
#include "funcs.h"

char shiftChar(char plaintxt, int sh) {
        if (!isalpha(plaintxt) || sh == 0)
            return plaintxt;

        int index; 

        if (sh > 0) {
            int a = isupper(plaintxt) ? (int) 'A' : (int) 'a';
            index = (((int) plaintxt + sh - a) % 26) + a;
        }
        else {
            int z = isupper(plaintxt) ? (int) 'Z' : (int) 'z';
            index = (((int) plaintxt + sh - z) % 26) + z;
        }

        return (char) index;
}

int charIndex(char plaintxt) {
        int ascii = (int) plaintxt - (isupper(plaintxt) ? (int) 'A' : (int) 'a');

        return ascii % 26;
} 