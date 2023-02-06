/*
Spring 2023 - Lab 02
Last name: Aguilar
First name: Julianne
GitHub username: juliannea
*/

#include <iostream>

int main()
{
    int number;
    do
    {
        std::cout<<"Enter integer from 0<n<100\n";
        std::cin>>number;
    }while(number <=0 || number >= 100);

    std::cout<<"number squared is "<<number*number<<std::endl;

}
