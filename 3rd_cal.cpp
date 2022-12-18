//Calculator without accepting the new value after invalid statement 
#include<iostream>
int main()
{
    int num1,num2,res,count=0;
    char sign;
    std::cout<<"Enter equation";
    std::cin>>num1>>sign>>num2;
    here:switch(sign)
    {
        case '+':
            res=num1+num2;
            break;
        case '-':
            res=num1-num2;
            break;
        case '*':
            res=num1*num2;
            break;
        case '/':
            res=num1/num2;
            break;
        default:
            std::cout<<"Invalid Equation!";
            count++;
            if(count<1)
            {
                goto here;
            }
            else
            {
                exit(0);
            }
            
    }
    std::cout<<"Result : "<<res;
    return 0;

}