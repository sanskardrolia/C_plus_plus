//Prime number checker program
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int num,count=0;
    cin>>num;
    for (int i = 1; i<=num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<num<<" is Prime";
    }
    else
    {
        cout<<num<<" is not prime";
    }
    return 0;
}