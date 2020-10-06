#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift){
  int shiftedChar;
  char newChar;
  if (isupper(c)) { // if char is uppercase
    newChar = (c - 'A' + rshift) % 26 + 'A';
    return newChar;
  }
  else if (islower(c)){ //if char is lowercase
    shiftedChar = ((int)c - 97 + rshift ) % 26 + 97; //a is 97
    return (char)shiftedChar;
  }
  else{ //if its not a letter in the alphabet
    return c;
  }
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string encryption = "";
  for (int i=0; i<plaintext.length(); i++){
    encryption += shiftChar(plaintext[i], rshift);
  }
  return encryption;
}
