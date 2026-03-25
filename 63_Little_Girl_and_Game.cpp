#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    int c = 0;
    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            c++;
        }
    }

    if (c % 2 == 1 || c == 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

    return 0;
}