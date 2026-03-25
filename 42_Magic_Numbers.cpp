#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 2;
            f = 1;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 1;
            f = 1;
        }
        else if (s[i] == '1')
        {
            f = 1;
        }
        else
        {
            f = 0;
            break;
        }
    }

    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}