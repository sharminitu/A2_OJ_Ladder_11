#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    vector<int> v(k);

    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int mn = INT_MAX;
    for (int i = 0; i <= k - n; i++)
    {
        int diff = abs(v[i] - v[n + i - 1]);
        mn = min(mn, diff);
    }

    cout << mn << endl;
    return 0;
}