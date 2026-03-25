#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[7];

    int s = 0;
    int b = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    while (s < n)
    {
        for (int i = 0; i < 7; i++)
        {
            s += a[i];
            b = i;
            if (s >= n)
            {
                break;
            }
        }
    }

    cout << b + 1 << endl;

    return 0;
}