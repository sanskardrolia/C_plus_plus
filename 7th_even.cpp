#include<iostream>
int main(){
    int num;
    std::cout<<"Enter a number"<< std::endl;
    std::cin>>num;
    if(num%2==0)
    {
        std::cout<< "Entered number " << num <<" is Even";
    }
    else{
        std::cout<< "Entered number " << num <<" is Odd";
    }
    return 0;
}