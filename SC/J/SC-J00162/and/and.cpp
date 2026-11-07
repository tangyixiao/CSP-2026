#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200005
int n, m, a[N], ans;
vector<int>cnt;
inline void solve(){
	for (int i = 30; i >= 0; i--){
		cnt.clear();
		for (int j = 1; j <= n; j++)
			if ((a[j] >> i) & 1) cnt.push_back(j);
		if (cnt.size() < m) continue;
		n = (int)cnt.size();
		vector<int>now;
		for (int j = 0; j < cnt.size(); j++)
			now.push_back(a[cnt[j]]);
		for (int j = 0; j < now.size(); j++)
			a[j + 1] = now[j];
		ans += (1 << i);
	}
}
signed main(){
#ifndef LCY
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
#else
#endif
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
		cin >> a[i];
	solve();
	cout << ans;
	return 0;
}