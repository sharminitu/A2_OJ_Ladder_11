#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> mp;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> s;
        mp[s]++;
    }

    string max_string = "";
    int max_freq = 0;
    for (auto ss : mp)
    {
        if (max_freq < ss.second)
        {
            max_freq = ss.second;
            max_string = ss.first;
        }
    }

    cout << max_string << endl;

    return 0;
}