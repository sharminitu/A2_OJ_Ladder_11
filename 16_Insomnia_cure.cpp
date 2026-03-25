#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, k, m, n, d;
    cin >> l >> k >> m >> n >> d;

    int c = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % l == 0 || i % k == 0 || i % m == 0 || i % n == 0)
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}