#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char s2;

    for (int i = 0; i < s.length(); i++)
    {
        s2 = s[i];
        if (s2 >= 'A' && s2 <= 'Z')
        {
            s2 = tolower(s2);
        }

        if (s2 != 'a' && s2 != 'e' && s2 != 'i' && s2 != 'o' && s2 != 'u' && s2 != 'y')
        {
            cout << "." << s2;
        }
    }
    return 0;
}