#include <iostream>
#include <ctre.hpp>

int main(int argc, char* argv[]) {
  
  bool status = false;
  static constexpr auto pattern = ctll::fixed_string{ "^[0-9A-Za-z_.]+@[0-9A-Za-z_]+[.][a-z]{2,}$" };
  if(argc != 2) {
    std::cout << "Email address required.\n";
    return 1;
  }
  if(ctre::match<pattern>(argv[1]))
    std::cout << "MATCHED!\n";
  else
    std::cout << "NOT MATCHED!\n";
  

  return 0;
}

