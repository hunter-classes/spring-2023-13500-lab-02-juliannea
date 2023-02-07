/*
Spring 2023 - Lab 02
Last name: Aguilar
First name: Julianne
GitHub username: juliannea
*/

#include <iostream>

int main()
{
    const int size = 10; //sets size to 10 
    int myData[size]; //creates an array of 10 integers 

     for (int n = 0; n < size; n++) 
    {
        myData[n]=1;
        
    }
  int i;
  int v;
  do{
    for (int j = 0; j < size; j++)
      {
        std::cout<<myData[j]<<" ";
      }
    std::cout<<"\n";
    std::cout<<"Input index:\n";
    std::cin>>i;
    std::cout<<"Input value:\n";
    std::cin>>v;

    if(i>=0 && i<10)
    {
      myData[i]=v;
    }
    
    }while(i>= 0 && i < size);

  std::cout<<"Index out of range. Exit. \n";
  

    return 0;
}
