// Example program to test sigmoid function on cpp.sh website.
// Works ratherly well.  
#include <iostream>
#include <string>
#include <cmath>

bool y = false;
double x = 2.0;
double z;
char result;

double nonlin(double x, bool deriv){
  if(deriv==true){
    return x*(1-x);
  }
  return 1/(1 + exp(-x));
}

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  z = nonlin(x,y);
  std::string result = std::to_string(z);
  std::cout << result << "\n";
  y = true;
  z = nonlin(z,y);
  result = std::to_string(z);
  std::cout << result << "\n";
}
