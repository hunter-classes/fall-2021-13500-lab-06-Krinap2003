/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 6
*/

#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  //Tesing Task B
  std::cout<<"\n --------------------------- \n";
  std::cout<<"Task B \n";
  std::cout<<"encryptCaesar(Way to Go!, 5) = "<<encryptCaesar("Way to Go!", 5);
  std::cout<<"\n";
  std::cout<<"encryptCaesar(Hello, World, 10) = "<<encryptCaesar("Hello, World", 10);
  std::cout<<"\n";

  //Tesing Task C
  std::cout<<"\n --------------------------- \n";
  std::cout<<"Task C \n";
  std::cout<<"encryptVigenere(Hello, World!, cake) = "<<encryptVigenere("Hello, World!", "cake");
  std::cout<<"\n";
  std::cout<<"encryptVigenere(Krin.., Pa  chk! l, abc) = "<<encryptVigenere("Krin.., Pa  chk! l", "abc");
  std::cout<<"\n";

  //Tesing Task D
  std::cout<<"\n --------------------------- \n";
  std::cout<<"Task D \n";
  std::cout<<"decryptCaesar(Rovvy, Gybvn!, 10) = "<<decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout<<"\n";
  std::cout<<"decryptVigenere(Jevpq, Wyvnd!, cake) = "<<decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout<<"\n";
  std::cout<<"decryptVigenere(Kskn.., Qc  djk! m, abc) = "<<decryptVigenere("Kskn.., Qc  djk! m", "abc");

  return 0;
}
