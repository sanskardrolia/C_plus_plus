#include<iostream>
int main()
{
    char alpha;
    std::cout<<"Enter a character: ";
    std::cin>>alpha;
    std::cout << "Entered Character is: " << alpha << std::endl << " ASCII value: " << int(alpha);
    return 0;
}