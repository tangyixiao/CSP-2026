#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    long long a[10005][10005];
    cin>>n>>a[10005][10005];
    for(int i=1;i<=n;i++){
        if(a[i-1][i-1]==a[i][i])
           cout<<'0';

    }
    return 0;
    }
