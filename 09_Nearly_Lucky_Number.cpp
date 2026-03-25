#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, r, t;
    int c = 0;
    cin >> n;
    bool f = 0;

    string s = to_string(n);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if (c == 4 || c == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}