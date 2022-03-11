#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B: shiftChar") {
    CHECK(shiftChar('k', -10) == 'a'); 
    CHECK(shiftChar('!', 5) == '!');
    CHECK(shiftChar('@', 100) == '@');
}

TEST_CASE("Task B: Caesar") {
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
    CHECK(encryptCaesar("", 1) == "");
}

TEST_CASE("Task C: Vigenere") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("gogogo", "cat") == "iozqgh");
}

TEST_CASE("Task D: Caesar") {
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("A3zovm_q1kD zB@5xo...", 23) == "D3cryp_t1nG cE@5ar...");
    CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
}

TEST_CASE("Task D: Vigenere") {
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Fohlnrwg", "coding") == "Daedalus");
    CHECK(decryptVigenere("Uiwyjrk yfwxnok", "beef") == "Testing testing");
} 