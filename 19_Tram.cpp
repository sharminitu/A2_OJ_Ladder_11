#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int s = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        s -= a;
        s += b;
        mx = max(mx, s);
    }
    cout << mx << endl;

    return 0;
}