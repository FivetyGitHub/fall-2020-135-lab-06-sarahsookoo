#include <iostream>
#include <vector>
#include <cmath>
#include "decrypt.h"
#include "decode.h"

int numChar(std::string str, char letter){
  int num = 0;
  for(int i=0; i<str.length(); i++){
    if (str[i] == letter || str[i] == char((int)letter - 32)){
	num++;
    }
  }
  return num;
  }

std::string decode(std::string str){ //str is an encrypted string
  double freq[] = {8.2, 1.5, 2.8, 4.3, 13, 2.2, 2, 6.1, 7, .15, .77, 4, 2.4, 6.7,
		  7.5, 1.9, .095, 6, 6.3, 9.1, 2.8, .98, 2.4, .15, 2, .074}; //freq of each letter as a percent
 std::string guesses [26]; //26 possible sentences
 double eachDis[26] = {0};
 double num = 0;
 std::vector<double> letters;
 
 for (int i=0; i<26; i++){
   guesses[i] = decryptCaesar(str, i); //decrypts the string creating 26 possible sentences
   std::string phr = guesses[i];
   for (int i = 97; i<123; i++){
     num = numChar(phr, char(i));
     letters.push_back((num/str.length()) *100);
   }
   double dis;
   for (int j=0; j<26; j++){
     dis = dis + pow(freq[i] - letters[i], 2);
   }
   eachDis[i] = sqrt(dis);
 }
     /* for (int j=0; j<26; j++){
     numChar[j] = (count[j] / sen.length())*100;//makes it a percent
   }
   for (int k=0; k<26; k++){
     dis[k] = pow(numChar[k] - freq[i], 2);
   }
   for (int l=0; l<26; l++){
     eachDis[l] += dis[l];
   }
   }*/

 int lowest = 0;
 for (int i=0; i<26; i++){
   //   std::cout << guesses[i] <<std::endl;
   if (eachDis[i] < eachDis[lowest]){
     lowest = i;
   }
 }
 // std::cout <<lowest<< std::endl;
 return guesses[lowest];
 }
