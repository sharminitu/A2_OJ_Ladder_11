#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string s1 = "hello";
    int f = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s1[f])
        {
            f++;
        }
    }
    if (f == s1.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}