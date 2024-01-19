#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int fact,value;
    cout<<"Enter the no:";
    cin>>value;
    fact = factorial(value);
    cout<<"factorial of Number is "<<fact;
    return 0;
}
int factorial(int n)
{
    if(n<0)
    return(-1);
    if(n==0)
    return(1);
    else
    {
    return(n*factorial(n-1));
    }
}