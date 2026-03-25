#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, z, a, b, c;
    cin >> x >> y >> z;

    long long n = sqrt(x * y * z);

    a = n / x;
    b = n / y;
    c = n / z;

    long long res = 4 * (a + b + c);

    cout << res << endl;
    return 0;
}