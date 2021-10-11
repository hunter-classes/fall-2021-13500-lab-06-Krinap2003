//Task C
#include <iostream>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

//Takes in a string value and a keyword 
std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int shift = 0;
    int num = 0;
    //Loops throgh the entire string
    for(int i = 0; i < plaintext.length(); i++)
    { 
        //Loops through the array of letters.
        for(int a = 0; a < 27; a++)
        {
            //determines if the chracter is supposed to be shifted
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
        //call the shiftChar and adds to the reuslt.
        result += shiftChar(plaintext[i], shift);
    }
    return result;
}