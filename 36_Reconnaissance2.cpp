#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];

    int mn = 1000;
    int mn1, mn2, c;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    int diff;
    for (int i = 0; i < n - 1; i++)
    {

        diff = abs(a[i] - a[i + 1]);

        if (diff < mn)
        {
            mn = diff;
            c = i;
        }
    }

    if (abs(a[n - 1] - a[0]) < mn)
    {
        cout << n << " " << 1 << endl;
        return 0;
    }

    cout << c + 1 << " " << c + 2 << endl;
