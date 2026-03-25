#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> freq;

    for (auto s : s1)
    {
        if (s != ' ')
        {
            freq[s]++;
        }
    }

    for (auto s : s2)
    {
        if (s == ' ')
        {
            continue;
        }
        else if (freq[s] > 0)
        {
            freq[s]--;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
