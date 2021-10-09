#include <iostream>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int shift = 0;
    int num = 0;
    for(int i = 0; i < plaintext.length(); i++)
    { 
            for(int x = 0; x < 27; x++)
            {
                if(keyword[num] == alph[x])
                {
                    shift = x;
                }
                num++;
            }
        result += shiftChar(plaintext[i], shift);
    }
    return result;
}