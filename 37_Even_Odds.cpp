#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, k;
    cin >> n >> k;

    long long Number_count = (n + 1) / 2;

    if (k <= Number_count)
    {
        cout << (2 * k - 1) << endl;
    }
    else
    {
        cout << (2 * (k - Number_count)) << endl;
    }

    return 0;
}