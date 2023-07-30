#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=0)
    {
        cout<<"X value is....."<<x;
        if(x%2==0)
        {
            cout<<"\nX value is....."<<x;
            if(x>999 & x<10000)
            {
                cout<<"\nX value contains.....digits"<<x;
            }
        }
    }
}
