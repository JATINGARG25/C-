#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year Number:";
    cin>>year;
    if((year%4==0)&&(year%100==0))
    cout<<"It is a leap year";
    else
    cout<<"It is not";
    return 0;
}