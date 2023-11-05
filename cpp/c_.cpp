#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"enter the value of first veriable:  ";
    cin>>num1;
    cout<<"enter the value of second veriable: ";
    cin>>num2;
    cout<<"before swapping the value of veriable 1 = "<<num1<<" and the value of veriable 2 = "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping the value of veriable 1 = "<<num1<<" and the value of veriable 2 ="<<num2<<endl;
    return 0;
}
