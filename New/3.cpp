#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
        cout<<"The large number = "<<a;
    if(b>a && b>c)
        cout<<"The large number = "<<b;
    if(c>a && c>b)
        cout<<"The large number = "<<c;
}
