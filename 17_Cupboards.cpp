#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0)
        {
            l0++;
        }
        else
        {
            l1++;
        }

        if (b == 0)
        {
            r0++;
        }
        else
        {
            r1++;
        }
    }

    cout << min(l0, l1) + (min(r0, r1)) << endl;

    return 0;
}