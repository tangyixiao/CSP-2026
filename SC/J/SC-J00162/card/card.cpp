#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100001
int n, m;
int a[N * 5], lst[N * 3], ans[N * 3], cnt[N * 3];
bool vis[N * 3];
inline void solve(int col){
	for (int j = lst[col]; j <= n; j++){
		ans[a[j]] += cnt[col];
		if (lst[a[j]] != j) j = lst[a[j]];
	}
}
signed main(){
#ifndef LCY
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
#else
#endif
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i], cnt[a[i]]++;
	for (int i = 1; i <= n; i++)
		lst[a[i]] = i;
	for (int i = 1; i <= n; i++)
		if (!vis[a[i]]) solve(a[i]), vis[a[i]] = 1;
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}