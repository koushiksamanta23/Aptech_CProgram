#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"enter the value of first variable:  ";
    cin>>num1;
    cout<<"enter the value of second variable: ";
    cin>>num2;
    cout<<"before swapping the value of variable 1 = "<<num1<<" and the value of variable 2 = "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping the value of variable 1 = "<<num1<<" and the value of variable 2 = "<<num2<<endl;
    return 0;
}
