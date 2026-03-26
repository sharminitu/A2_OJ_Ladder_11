#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<=2*n;i++){
        int k = min(i,2*n-i);

        for(int j=0;j<n-k;j++){
            cout<<"  ";
        }
        for(int j=0;j<=k;j++){
            cout<<j;

            if(j!=k){
                cout<<" ";
            }
        }

        for(int j=k-1;j>=0;j--){
            cout<<" "<<j;
        }

        cout<<endl;

    }
    return 0;
}