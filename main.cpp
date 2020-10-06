#include <iostream>
#include "funcs.h"
/*#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"
*/
void test_ascii(std::string a);
/*std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptViginere(std::string plaintext, std::string keyword);
std::string decryptCaesar(std::string cipheredtext, int rshift);
std::string decryptViginere(std::string cipheredtext, std::string keyword);
*/
int main()
{
  test_ascii("sarah sookoo");
  std::cout << std::endl;
  test_ascii("Cat :3 Dog");
  /*
  std::cout <<"testing encryptCaesar"<< std::endl;
  std::cout << encryptCaesar("Way To Go!", 5) <<std::endl;
  std::cout << encryptCaesar("HeLlO wOrLd!", 8) <<std::endl;
  std::cout << encryptCaesar("Sarah A. Sookoo", 3) <<std::endl;

  std::cout <<"testing encryptViginere"<< std::endl;
  std:: cout << encryptViginere("Hello, World!", "cake") <<std::endl;
  std:: cout << encryptViginere("How are you?", "today") <<std::endl;
  std:: cout << encryptViginere("Have a good day!", "day") <<std::endl;
  
  // std::string encryption = encryptCaesar("= Caesar =", 10);
  // std::cout <<"Ciphered text: " <<
  std::cout <<"testing decryptViginere"<< std::endl;
  //  std::string a = encryptViginere("Hello, World!", "cake");
  // std::string b = decryptViginere(a, "cake");
  // std:: cout<< b << std::endl;

  std::cout << decryptViginere(encryptViginere("Hello, World!", "cake"), "cake") <<std::endl;

  std::cout <<decryptViginere(encryptViginere("How are you?", "today"), "today") <<std::endl;

  std::cout <<decryptViginere(encryptViginere("Have a good day!", "day"), "day") <<std::endl;

  std::cout <<"testing decryptCaesar"<< std::endl;
  //  std::string c = encryptCaesar("Way to Go!", 5);
  // std::string d = decryptCaesar(c, 5);
  // std:: cout<< d << std::endl;

  std::cout <<decryptCaesar(encryptCaesar("Way To Go!" , 5), 5)<<std::endl;

  std::cout <<decryptCaesar(encryptCaesar("HeLlO wOrLd!", 8), 8)<<std::endl;

  std::cout <<decryptCaesar(encryptCaesar("Sarah A. Sookoo", 3), 3)<<std::endl;
  */				  
  return 0;
}
