#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10,M=5e5+10;
int f[N],lt[M],a[N],cnt[N],flg[M],n,m;
vector<int> ans;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;++i){
		cin >> a[i];
		lt[a[i]] = n+1;
		cnt[i] = 1;
	}
	for (int i=n;i>=1;--i){
	//	f[i] = lt[a[i]]+1;
		if (lt[a[i]] == n+1){
			ans.push_back(i);
		} 
		else cnt[lt[a[i]]+1] += cnt[i];
		
		lt[a[i]] = i;
	}
	
	for (int i=1;i<=n;++i) lt[i] = 0;
	for (int u:ans){
		f[u] += cnt[u];
		flg[u] = 1;
	}
	int c = 0; 
	for (int i=1;i<=n;++i){
		c += f[i];
		lt[a[i]] += c;
	}
	for (int i=1;i<=n;++i){
		if (flg[i]) continue;
		lt[a[i]] += cnt[i];
	}
	for (int i=1;i<=m;++i){
		cout << lt[i] << ' ';
	}
	return 0;
}
