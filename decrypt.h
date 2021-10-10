#pragma once 
#include <iostream>

char shiftChar2(char c, int rshift);
std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string plaintext, std::string keyword);

