#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N=2e5;
int n,m,a[N],b[30],dp[N][30],ans;
int t[1000000],is[1000000],siz[1000000];


void dfs(int u){
    if(!t[u]) return;
    dfs(u*2);
    dfs(u*2+1);
    siz[u] = siz[u*2]+siz[u*2+1]+is[u];
}

signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    cin >> n >> m;
    for(int i=1;i <= n;i++){
        cin >> a[i];
        int now = 1;
        for(int i=29;i >= 0;i--){
            now = 2*now+(a[i]&(1<<i));
            if(t[now]==0){
                t[now] = 1;
                is[now] = 1;
            }
            if(i==0) is[i] = 1;
        }
    }
    dfs(1);
    int now = 1;
    for(int i=29;i >= 0;i--){
        if(siz[now*2+1]>=m){
            ans+=(1<<i);
            now=now*2+1;
        }
        else{
            now=now*2;
        }
    }
    cout << ans;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
