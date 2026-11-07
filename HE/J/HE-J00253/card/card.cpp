#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],ans[300005],nxt[500005],lst[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],lst[a[i]]=i;
	for(int t=1;t<=n;t++){
		for(int p=t;p<=n;p++){
			ans[a[p]]++;
			if(p<lst[a[p]]) p=lst[a[p]];
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}//O(n^2)
