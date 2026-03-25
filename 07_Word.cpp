#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c = 0, c1 = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (c > c1)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}