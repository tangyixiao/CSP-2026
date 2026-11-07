#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
int n,m,a[N],cnt[N];
int o[N],lst[N],nx[N];
ll xi[N],ans[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		lst[i]=o[a[i]];
		o[a[i]]=i;
	}
	if(n==m) {
		for(int i=1; i<=n; i++) cnt[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
		return 0;
	}
	for(int i=1; i<=n; i++) if(lst[i]) nx[lst[i]]=i;
	for(int i=n; i>=1; i--) {
		if(nx[i]) {
			xi[nx[i]]++;
		}
	}
	for(int i=n; i>=1; i--) {
		if(nx[i]) continue;
		else {
			cnt[a[i]]++;
		}
		for(int j=1; j<=m; j++) ans[j]+=(cnt[j]*(xi[i]+1));
	}
	for(int i=1; i<=m; i++) cout<<ans[i]<<' ';
	return 0;
}
/*
1 2 1 3
2 3 2 1
*/
