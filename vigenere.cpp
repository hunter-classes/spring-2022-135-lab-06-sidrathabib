#include <iostream>
#include "funcs.h"
#include "vigenere.h"

std::string encryptVigenere(std::string plaintxt, std::string keyword) {
    std::string r = "";

    int i = -1;
    int index = -1;

    while (plaintxt[++i]) {
        if (!isalpha(plaintxt[i])) {
            r += plaintxt[i];
        }
        else {
            r += shiftChar(plaintxt[i], charIndex(keyword[++index % keyword.length()]));
        }
    }

    return r;
}