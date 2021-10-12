#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "cctype"

//Task B
TEST_CASE("string encryptCaesar base case")
{
    CHECK(shiftChar('E', 5) == 'J');
    CHECK(shiftChar('z', 20) == 't');
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("", 5) == "");
}


//Task C
TEST_CASE("string encryptVigenere base case")
{
    CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Krin.., Pa  chk! l","abc") == "Kskn.., Qc  djk! m");
    CHECK(encryptVigenere("","abc") == "");
}

//Task D
TEST_CASE("string decrypt base cases")
{
    CHECK(shiftChar2('G', 10) == 'W');
    CHECK(shiftChar2('o', 5) == 'j');
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("OVMRE TEXIP!", 4) == "KRINA PATEL!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptCaesar("", 10) == "");
    CHECK(decryptVigenere("", "cake") == "");
}

