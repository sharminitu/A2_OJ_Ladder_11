#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    int f = 1;
    int s = 0;
    int c = 0;

    for (int i = 0; i < 12; i++)
    {
        s += a[i];
        c++;
        if (s >= n)
        {
            f = 0;
            break;
        }
    }

    if (n == 0)
    {
        cout << 0 << endl;
    }

    else if (f)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}