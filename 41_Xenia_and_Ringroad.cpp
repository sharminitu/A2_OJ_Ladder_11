#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;

    long long a[m];
    long long c = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    if (a[0] > 1)
    {
        c = a[0] - 1;
    }

    for (int i = 0; i < m - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            c += (n - (a[i] - a[i + 1]));
        }
        else if (a[i] < a[i + 1])
        {
            c += (a[i + 1] - a[i]);
        }
    }

    cout << c << endl;
}