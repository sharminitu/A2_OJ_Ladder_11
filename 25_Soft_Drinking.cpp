#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, mnn = 0, mn;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int m = k * l / nl;
    int t = c * d / 1;
    int s = p / np;

    mnn = min(m, t);
    mn = min(mnn, s);

    int x = mn / n;

    cout << x << endl;

    return 0;
}