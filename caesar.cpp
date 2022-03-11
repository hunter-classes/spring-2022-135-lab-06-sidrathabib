#include <iostream>
#include "caesar.h"
#include "funcs.h"

std::string encryptCaesar(std::string plaintxt, int shift) {
    std::string s = "";

    int index = -1;

    while (plaintxt[++index])
        s += shiftChar(plaintxt[index], shift);

    return s;
}