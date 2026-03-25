#include <bits/stdc++.h>
using namespace std;
int main()
{

    string t;
    string t1;
    cin >> t >> t1;
    int len = t.length();
    string s2(len, '0');

    for (int i = 0; i <= t.length(); i++)
    {
        if (t[i] == t1[i])
        {
            s2[i] = '0';
        }
        else
        {
            s2[i] = '1';
        }
    }
    cout << s2 << endl;
    return 0;
}