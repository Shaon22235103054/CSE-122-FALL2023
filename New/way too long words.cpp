#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        int l = x.length();

        if (l > 10)
        {
            cout << x[0] << l - 2 << x[l - 1] << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}

