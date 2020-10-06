#include <iostream>
#include "decrypt.h"

std::string decryptCaesar(std::string cipheredtext, int rshift){
  std::string decrypted = "";
  for (int i = 0; i<cipheredtext.length(); i++){
    char curr = cipheredtext[i];
    if (isupper(curr)){
      curr = 'A' + (curr - 'A' - rshift + 26) % 26;
    }
    else if (islower(curr)){
      curr = 'a' + (curr - 'a' - rshift + 26) % 26;
    }
    decrypted += curr;
  }
  return decrypted;
}

std::string decryptViginere(std::string cipheredtext, std::string keyword){
  std::string decrypted = "";
  int num = 0;
  int key;
  char curr;
  for (int i = 0; i<cipheredtext.length(); i++){
    curr = cipheredtext[i];
    if (isupper(curr)){
      key = keyword[num] - 'a';
      num = (num + 1) % keyword.length();
      curr = 'A' + (curr - 'A' - key + 26) % 26;
    }
    else if (islower(curr)){
      key = keyword[num] - 'a';
      num = (num + 1) % keyword.length();
      curr = 'a' + (curr - 'a' - key + 26) % 26;
    }
    decrypted += curr;
  }
  return decrypted;
}
