#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> s = {s1, s2, s3, s4};
    int uniquecount = s.size();

    cout << (4 - uniquecount) << endl;

    return 0;
}