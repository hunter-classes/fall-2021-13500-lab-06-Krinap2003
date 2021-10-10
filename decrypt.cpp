//Task A
#include <iostream>
#include <cctype>
#include "caesar.h"
#include "decrypt.h"

char shiftChar2(char c, int rshift)
{
    char result;
    if((int)c >= 65 && (int)c <= 90)
    {
        if((int)c-rshift > 90 || (int)c-rshift < 65)
        {
            c += 26;
            result = (char)c-rshift;
        }
        else
        {
            result = (char)c-rshift;
        }
    }
    else if((int)c >= 97 && (int)c <= 122)
    {
        if((int)c-rshift > 122 || (int)c-rshift < 97)
        {
            c += 26;
            result = (char)c-rshift;
        }
        else
        {
            result = (char)c-rshift;
        }
    }
    else
    {
        result = (char)c;
    }
    return result;
}

std::string decryptCaesar(std::string ciphertext, int rshift)
{
    std::string result= "";
    for(int i = 0; i < ciphertext.length(); i++)
    {
        result += shiftChar2(ciphertext[i], rshift);
    }
    return result;
}

std::string decryptVigenere(std::string plaintext, std::string keyword)
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
        result += shiftChar2(plaintext[i], shift);
    }
    return result;
}

