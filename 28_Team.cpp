#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, s, cn = 0;
    int a[3];
    cin >> t;
    while (t--)
    {
        s = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            s = s + a[i];
        }

        if (s >= 2)
        {
            cn++;
        }
    }
    cout << cn << endl;

    return 0;
}