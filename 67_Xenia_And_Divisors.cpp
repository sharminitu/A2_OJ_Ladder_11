#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    if (mp[5] > 0 || mp[7] > 0)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<vector<int>> group;

    while (mp[4] > 0)
    {
        if (mp[1] <= 0 || mp[2] <= 0)
        {
            cout << -1 << endl;
            return 0;
        }

        group.push_back({1, 2, 4});
        mp[1]--;
        mp[2]--;
        mp[4]--;
    }

    while (mp[3] > 0)
    {
        if (mp[1] <= 0 || mp[6] <= 0)
        {
            cout << -1 << endl;
            return 0;
        }
        group.push_back({1, 3, 6});
        mp[1]--;
        mp[3]--;
        mp[6]--;
    }

    while (mp[2] > 0)
    {
        if (mp[1] <= 0 || mp[6] <= 0)
        {
            cout << -1 << endl;
            return 0;
        }

        group.push_back({1, 2, 6});
        mp[1]--;
        mp[2]--;
        mp[6]--;
    }

    for (auto p : mp)
    {
        if (p.second != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for (auto &x : group)
    {
        cout << x[0] << " " << x[1] << " " << x[2] << endl;
    }

    return 0;
}