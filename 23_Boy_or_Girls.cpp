#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int sz = unique(s.begin(), s.end()) - s.begin();
    if (sz % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}