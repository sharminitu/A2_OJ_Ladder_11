#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
    }

    int cnt = 0;

    for (int i = 1; i <= 5; i++)
    {
        int total = s + i;

        if (total % (n + 1) == 1)
        {
            cnt++;
        }
    }
    cout << 5 - cnt << endl;

    return 0;
}