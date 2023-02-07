/*
Spring 2023 - Lab 02
Last name: Aguilar
First name: Julianne
GitHub username: juliannea
*/

#include <iostream>

int main()
{
  int fib[60];
  fib[0]=0;
  fib[1]=1;
  
  std::cout<<fib[0];
  std::cout<<" \n";
  std::cout<<fib[1];
  std::cout<<" \n";
  
  for(int i=2; i<60; i++)
    {
      fib[i]= fib[i-1]+ fib[i-2];
      std::cout<<fib[i];
      std::cout<<" \n";
      
    }
  
  return 0;
}

//I observe that each number is the sum of the preceding 2 numbers and I assume it's happening because it's adding the subtraction of 1 and the subtraction of 2 from the original number//
