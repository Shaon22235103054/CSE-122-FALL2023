#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a=0,n;
    cin >> n;
    char c[n];
    cin >> c;
    for(int i=0; i<n; i++)


        if(c[i]==c[i+1])
            {
                a++;
            }


     cout <<a;

    return 0;
}
