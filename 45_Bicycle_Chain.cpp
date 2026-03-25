#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> v;

    int a[n];

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                int s = b[j] / a[i];
                v.push_back(s);
            }
        }
    }

    sort(v.rbegin(), v.rend());

    int c = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
        {
            c++;
        }
        else
        {
            break;
        }
    }

    cout << c << endl;
    return 0;
}