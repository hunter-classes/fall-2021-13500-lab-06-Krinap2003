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
        
        for(int a = 0; a < 27; a++)
        {
            if(num >= keyword.length() || !isalpha(plaintext[i]))
            {
                num = 0;
            }
            if(keyword[num] == alph[a])
            {
                shift = a;
            }
        }  
        num++;
        result += shiftChar(plaintext[i], shift);
    }
    return result;
}