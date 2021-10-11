//Task B

#include <iostream>
#include <cctype>
#include "caesar.h"

//Helper function that determines the amount of stift for the char
char shiftChar(char c, int rshift)
{
    char result;
    if((int)c >= 65 && (int)c <= 90)
    {
        if((int)c+rshift > 90)
        {
            c -= 26;
            result = (char)c+rshift;
        }
        else
        {
            result = (char)c+rshift;
        }
    }
    else if((int)c >= 97 && (int)c <= 122)
    {
        if((int)c+rshift > 122)
        {
            c -= 26;
            result = (char)c+rshift;
        }
        else
        {
            result = (char)c+rshift;
        }
    }
    else
    {
        result = (char)c;
    }
    return result;
}

//This function implements Caesar chiper encryption
std::string encryptCaesar(std::string plaintext, int rshift)
{
    std::string result= "";
    for(int i = 0; i < plaintext.length(); i++)
    {
        result += shiftChar(plaintext[i], rshift);
    }
    return result;
}