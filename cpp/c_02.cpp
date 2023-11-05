#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of first veriable:  ";
    cin>>a;
    cout<<"enter the value of second veriable: ";
    cin>>b;
    cout<<"before swapping the value of veriable 1 = "<<a<<" and the value of veriable 2 = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping the value of veriable 1 = "<<a<<" and the value of veriable 2 ="<<b<<endl;
    return 0;
}
