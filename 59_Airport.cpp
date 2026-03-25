#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int min_money = 0;
    int mx_money = 0;

    vector<int> v(m), a(n), b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    a = v;

    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        int indx1 = -1;
        for (int j = 0; j < m; j++)
        {
            if (a[j] > mx)
            {
                mx = a[j];
                indx1 = j;
            }
        }
        mx_money += mx;
        a[indx1]--;
    }

    b = v;

    for (int i = 0; i < n; i++)
    {

        int indx2 = -1;
        int mn = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            if (b[j] > 0 && b[j] < mn)
            {
                mn = b[j];
                indx2 = j;
            }
        }
        min_money += mn;
        b[indx2]--;
    }

    cout << mx_money << " " << min_money << endl;
}