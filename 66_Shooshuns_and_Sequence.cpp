#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, s;
    cin >> n >> s;
    int a[n];

    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int indx;
    for (int i = n; i >= 1; i--)
    {
        if (a[i] != a[s])
        {
            indx = i;
            break;
        }
        c++;
    }

    if (c == n)
    {
        cout << 0 << endl;
    }
    else if (c > 0 && indx <= s)
    {
        cout << n - c << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}