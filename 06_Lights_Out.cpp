#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5] = {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}};

    int b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            int i = r + 1;
            int j = c + 1;
            if (b[r][c] % 2 != 0)
            {
                a[i][j] = !a[i][j];
                a[i - 1][j] = !a[i - 1][j];
                a[i + 1][j] = !a[i + 1][j];
                a[i][j - 1] = !a[i][j - 1];
                a[i][j + 1] = !a[i][j + 1];
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}