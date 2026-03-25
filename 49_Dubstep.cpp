#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    string st = "WUB";

    size_t pos = s.find(st);

    while ((pos = s.find(st)) != string::npos)
    {
        s.replace(pos, st.length(), " ");
    }

    if (s[0] == ' ')
    {
        s.erase(0, 1);
    }

    cout << s << endl;
    return 0;
}