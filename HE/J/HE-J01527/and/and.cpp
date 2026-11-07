#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200005],fl[200005],mx=0 ;
void dfs(ll x){
    if (x==m){
        ll ans=0x7ffffffff;
        for (int i=1;i<=n;i++){
            if (fl[i]==1){
                ans&=a[i];
            }
        }
        mx=max(mx,ans);
    }else{
        for (int i=1;i<=n;i++){
            if (fl[i]==0){
                fl[i]=1;
                dfs(x+1);
                fl[i]=0;
            }
        }
    }

}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    dfs(0);
    cout<<mx<<endl;
    return 0;
}
