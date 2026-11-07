#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int MAXN=2e5;
int n,m,a[MAXN+11],pre[32][MAXN+11];
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    for(int i=1;i<=n;i++)
        for(int t=0;t<=30;t++)
            pre[t][i]=pre[t][i-1]+((a[i]>>t)&1);
    int l=1,r=n,ans=0;
    for(int t=30;t>=0;t--){
        if(pre[t][r]-pre[t][l-1]>=m){
            ans|=(1<<t);
            while(((a[l]>>t)&1)^1)
                l++;
            while(((a[r]>>t)&1)^1)
                r--;
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int T=1;
    // cin>>T;
    while(T--)
        solve();
    return 0;
}