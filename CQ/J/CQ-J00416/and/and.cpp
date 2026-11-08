#include<bits/stdc++.h>
using namespace std;
// #define int long long
int a[500005];
signed main(){
    ios::sync_with_stdio(false),cin.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    int num=0,pre=0;
    for(int i=30;i>=0;i--){
        num|=(1<<i);
        int cnt=0;
        for(int j=1;j<=n;j++)if((num&a[j])==num)cnt++;
        if(cnt<m)num=pre;
        else pre=num;
    }
    cout<<num;
    return 0;
}