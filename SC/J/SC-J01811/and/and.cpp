#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+5;
int n,a[N],cnt,m,pos,bj[N],ans;
signed main() {
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=30;i>=0;i--) {
        cnt=0;
        for(int j=1;j<=n;j++)
            if(!bj[j]&&((a[j]>>i)&1))++cnt;
        // cout<<(1<<i)<<' '<<cnt<<'\n';
        if(cnt>=m) {
            ans+=(1<<i);
            for(int j=1;j<=n;j++)
                if(!((a[j]>>i)&1))bj[j]=1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}