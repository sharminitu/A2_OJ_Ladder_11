#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> v(n), a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    a = v;

    sort(a.begin(), a.end());

    long long b;
    if (a[0] == a[1])
    {
        cout << "Still Rozdil" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[0] == v[i])
            {
                b = i;
            }
        }
        cout << b + 1 << endl;
    }
}