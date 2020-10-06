#include <iostream>
#include "funcs.h"

// add functions here
void test_ascii(std::string str){
  // getline(str);

  for (int i=0; i<str.length(); i++){
     std::cout << str[i] << " " << (int)str[i] << std::endl;
    // std::cout << 5 <<std::endl;
    // return 0;
  }
}
