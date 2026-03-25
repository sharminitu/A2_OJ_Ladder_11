#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long k;
    cin >> n;

    vector<long long> v(n);

    int c2 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 100)
        {
            c1++;
        }
        else if (v[i] == 200)
        {
            c2++;
        }
    }

    if (c1 % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else if (c1 == 0 && c2 % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}