#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int f = 1;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s <= v[i].first)
        {
            cout << "NO" << endl;
            f = 0;
            break;
        }
        else
        {
            s += v[i].second;
        }
    }

    if (f)
    {
        cout << "YES" << endl;
    }

    return 0;
}