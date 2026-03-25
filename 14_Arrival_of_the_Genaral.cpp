#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    int mn = 101, mx = 0, indxmx, indxmn;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            indxmx = i;
        }
        if (a[i] <= mn)
        {
            mn = a[i];
            indxmn = i;
        }
    }

    if (a[0] == mx && a[n - 1] == mn)
    {
        cout << 0 << endl;
    }
    else if (indxmx > indxmn)
    {
        cout << indxmx + n - indxmn - 2;
    }
    else
    {
        cout << indxmx + n - indxmn - 1 << endl;
    }

    return 0;
}