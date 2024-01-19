#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of first variable:  ";
    cin>>a;
    cout<<"enter the value of second variable: ";
    cin>>b;
    cout<<"before swapping the value of variable 1 = "<<a<<" and the value of variable 2 = "<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"after swapping the value of variable 1 = "<<a<<" and the value of variable 2 ="<<b<<endl;
    return 0;
}
