#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    int c, d;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                c = abs(i - 2);
                d = abs(j - 2);
            }
        }
    }

    cout << c + d << endl;

    return 0;
}