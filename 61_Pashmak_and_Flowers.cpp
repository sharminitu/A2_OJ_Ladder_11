#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    long long mx = *max_element(a.begin(), a.end());

    long long mn = *min_element(a.begin(), a.end());

    long long c = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            c++;
        }
        else if (a[i] == mn)
        {
            c1++;
        }
    }

    cout << mx - mn << " ";
    if (mx == mn)
    {
        cout << n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << c * c1 << endl;
    }

    return 0;
}