#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool f = true;
    int a[n], b[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        int s = 0, t = 0, u = 0, v = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j] && b[i] == b[j])
            {
                s = 1;
            }
            if (a[i] < a[j] && b[i] == b[j])
            {
                t = 1;
            }
            if (a[i] == a[j] && b[i] < b[j])
            {
                u = 1;
            }
            if (a[i] == a[j] && b[i] > b[j])
            {
                v = 1;
            }
        }

        if (s * t * u * v)
        {
            c++;
        }
    }

    cout << c << endl;
}