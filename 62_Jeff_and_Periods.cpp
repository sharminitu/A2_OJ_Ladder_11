#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, vector<int>> pos;

    for (int i = 0; i < n; i++)
    {
        pos[a[i]].push_back(i);
    }

    vector<pair<int, int>> ans;

    for (auto &x : pos)
    {
        int k = x.first;
        vector<int> &v = x.second;

        if (v.size() == 1)
        {
            ans.push_back({k, 0});
        }
        else
        {
            int d = v[1] - v[0];
            bool ok = true;

            for (int i = 2; i < v.size(); i++)
            {
                if ((v[i] - v[i - 1]) != d)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans.push_back({k, d});
            }
        }
    }

    cout << ans.size() << endl;

    for (auto &p : ans)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}