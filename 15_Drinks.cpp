#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, c = 0, s = 0;
    double avg;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    avg = (double)s / n;
    cout << fixed << setprecision(12) << avg << endl;

    return 0;
}