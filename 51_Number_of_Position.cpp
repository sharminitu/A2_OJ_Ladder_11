#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int m = a - max(b + 1, a - c) + 1;
    cout << m << endl;

    return 0;
}