#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = a[0];
    int mn = a[0];
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            c++;
            mx = a[i];
        }
        else if (mn > a[i])
        {
            c++;
            mn = a[i];
        }
    }

    cout << c << endl;
    return 0;
}