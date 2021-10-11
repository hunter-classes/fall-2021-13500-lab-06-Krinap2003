//Task A
#include <iostream>
#include <cctype>
#include "funcs.h"


int main()
{
    //Task A
    std::cout<<"Task A \n";
    testascii("Cat :3 Dog");
    testascii("Hello World!");
    return 0;
}

//Takes in a string and print the ascii value for each char in the string on a seperate line.
void testascii(std::string s)
{
    std::cout<<"Input: "<<s<<"\n";
    for(int i = 0; i < s.length(); i++)
    {
        std::cout<<s[i]<<" "<<(int)s[i]<<"\n";
    }
}
