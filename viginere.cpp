#include <iostream>
#include "viginere.h"

std::string encryptViginere(std::string plaintext, std::string keyword){
  std::string encryption = "";
  char curr; //will be encrypted
  int num = 0; //goes through letters in keyword
  int key, newPos; //amount to shift by, 0-25

  for (int i=0; i<plaintext.length(); i++){
    curr = plaintext[i]; 
    if (isupper(curr)){
	key = keyword[num] - 'a'; //get shift distance from keyword
	num = (num + 1) % keyword.length(); // go to next letter in keyword
	newPos = (curr - 'A' + key) % 26; //get shifted position
	curr = 'A' + newPos;
      }
      else if (islower(curr)) {
	key = keyword[num] - 'a';
	num = (num + 1) % keyword.length();
	newPos = (curr - 'a' + key) % 26;
	curr = 'a' + newPos;
      }
      encryption += curr;
      }
      return encryption;
}
      
