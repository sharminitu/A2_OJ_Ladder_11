#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    string b;
    cin >> a >> b;

    vector<int> pos;

    if (a.size() != b.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            pos.push_back(i);
        }
    }

    if (pos.size() != 2)
    {
        cout << "NO" << endl;
        return 0;
    }

    swap(a[pos[0]], a[pos[1]]);

    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}