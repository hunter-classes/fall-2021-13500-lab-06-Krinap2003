//Task A
#include <iostream>
#include <cctype>
void testascii(std::string s);

int main()
{
    testascii("Cat :3 Dog");
    return 0;
}

void testascii(std::string s)
{
    std::cout<<"Input: "<<s<<"\n";
    for(int i = 0; i < s.length(); i++)
    {
        std::cout<<s[i]<<" "<<(int)s[i]<<"\n";
    }
}
