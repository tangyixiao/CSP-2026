#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],ed[N],cnt[N],ans[N];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i],ed[a[i]]=i,cnt[i]=1;
    for(int i=1;i<=n;i++) ans[a[i]]+=cnt[i],cnt[ed[a[i]]+1]+=cnt[i];
    for(int i=1;i<=m;i++) cout << ans[i] << " ";
    return 0;
}