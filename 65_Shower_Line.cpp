#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }

    vector<int> p = {0,1,2,3,4};

    int ans=0;


    do{
        int c=0;

        c+=a[p[0]][p[1]]+a[p[1]][p[0]];
        c+=a[p[2]][p[3]]+a[p[3]][p[2]];

        c+=a[p[1]][p[2]]+a[p[2]][p[1]];

        c += a[p[3]][p[4]] + a[p[4]][p[3]];
        c += a[p[2]][p[3]] + a[p[3]][p[2]];
        c += a[p[3]][p[4]] + a[p[4]][p[3]];

        ans = max(ans,c);



    }
    while(next_permutation(p.begin(),p.end()));

    cout<<ans<<endl;
    return 0;
}