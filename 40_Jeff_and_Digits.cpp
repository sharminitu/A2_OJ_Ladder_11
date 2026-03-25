#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int c1 = 0, c2 = 0;
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 5)
        {
            c1++;
        }
        else if (a[i] == 0)
        {
            c2++;
        }
    }

    for (int i = c1; i > 0; i--)
    {

        if (c1 % 9 == 0 && c2 >= 1)
        {
            for (int i = 0; i < c1; i++)
            {

                cout << "5";
            }
            for (int i = 0; i < c2; i++)
            {
                cout << "0";
            }
            f = 0;
            break;
        }
        c1--;
    }
    if (f == 1)
    {
        if (c2 > 0)
        {
            cout << "0" << endl;
        }

        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}