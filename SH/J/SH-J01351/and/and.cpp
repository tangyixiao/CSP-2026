#include <bits/stdc++.h>
using namespace std;

const int mxn=2e5+5;
int a[mxn],dp[mxn];
bool vis[mxn];
long long n,m;
int tw=1;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(vis,true,sizeof(vis));
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        if(dp[1]<a[i]){
            dp[1]=a[i];
            tw=i;
        }
    }
    vis[tw]=false;
    for(int i=2;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(vis[j]){
                if(dp[i]<(dp[i-1]&a[j])){
                    tw=j;
                    dp[i]=(dp[i-1]&a[j]);
                }
            }
        }
        vis[tw]=false;
    }
    cout<<dp[m];
    return 0;
}
