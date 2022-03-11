#include <iostream>

void printString(std::string s) {
    int i = -1;

    while (s[++i])
         std::cout << s[i] << " " << (int) s[i] << std::endl;
}

void printTest(std::string s) {
    std::cout << "String is \"" << s <<  "\"" << std::endl;

    printString(s);
}

int main() {
    printTest("Wassup Guys");
    printTest("It's Ya Boi");

    return 0;
}