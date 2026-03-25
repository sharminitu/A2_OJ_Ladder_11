#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<int, int> mp;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        int a[i];
        cin >> a[i];
        mp[a[i]] = i + 1;
    }

    long long m, s1 = 0, s2 = 0;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        s1 += mp[t];
        s2 += n - mp[t] + 1;
    }

    cout << s1 << " " << s2 << endl;
}