#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    map<char, int> mp;

    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    char s1;
    int c = 0;
    bool add = 1;
    string result = "";
    for (auto ss : mp)
    {
        if (ss.second % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for (auto ss : mp)
    {
        int times = ss.second / k;

        while (times--)
        {
            result += ss.first;
        }
    }

    string final_result = "";

    for (int i = 1; i <= k; i++)
    {
        final_result += result;
    }
    cout << final_result << endl;

    return 0;
}