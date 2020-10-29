#include <iostream>
#include "funcs.h"
#include "decode.h"

void test_ascii(std::string a);

int main()
{
  std::cout <<"test_ascii(sarah sookoo): "<< std:: endl;
  test_ascii("sarah sookoo");
  std::cout << std::endl;
  std::cout <<"test_ascii(Cat :3 Dog): "<< std::endl;
  test_ascii("Cat :3 Dog");

  std::cout<<std::endl <<"testing decode" <<std::endl;
  std::string a = decode("krz duh brx");
  std::cout << a <<std::endl;
  				  
  return 0;
}
