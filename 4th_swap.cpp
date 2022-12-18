#include<iostream>
int main()
{
    int num1,num2;
    std::cout<<"Enter number 1: ";
    std::cin>>num1;
    std::cout<<"Enter number 2: ";
    std::cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    std::cout<<"Number 1: "<<num1<<"\n";
    std::cout<<"Number 2: "<<num2;
    return 0;
}