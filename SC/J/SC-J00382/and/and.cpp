#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],f[N],ans;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=30;i>=0;i--){
        int cnt=0;
        for(int j=1;j<=n;j++) if(!f[j]) cnt+=((a[j]>>i)&1);
        if(cnt<m) continue;
        ans+=(1<<i);
        for(int j=1;j<=n;j++) if(((a[j]>>i)&1)==0) f[j]=1;
    }
    cout << ans;
    return 0;
}