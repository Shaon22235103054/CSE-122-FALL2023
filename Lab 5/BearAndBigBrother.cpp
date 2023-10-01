#include<iostream>
using namespace std;
int main()
{
    int a,b,i,x=0;
    cin>>a>>b;

    for(i=0;a<=b;i++)
    {
        a=a*3;
        b=b*2;
        x+=1;
    }
    cout<<x;
}
