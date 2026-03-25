#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int last;

    int a[n];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    int lp = mx % m == 0 ? (mx / m) : ((mx / m) + 1);

    for (int i = 0; i < lp; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= 0)
            {
                continue;
            }
            a[j] -= m;
            last = j;
        }
    }

    cout << last + 1 << endl;
    return 0;
}