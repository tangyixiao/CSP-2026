#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500010],pos[500010],cnt[500010],ans[500010];
signed main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],pos[a[i]]=max(pos[a[i]],i),cnt[i]=1;
	for(int i=1;i<=n;i++) cnt[pos[a[i]]+1]+=cnt[i];
	for(int i=1;i<=n;i++) ans[a[i]]+=cnt[i];
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 
// 8:34 会 T4  
// 8:40 写完 
//今年 T4 怎么这么简单啊 