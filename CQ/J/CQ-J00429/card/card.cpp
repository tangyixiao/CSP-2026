#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
constexpr int N = 5e5 + 5;
int n, m;
int a[N];
int ed[N];
int ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	bool flag = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) ed[a[i]] = i;
	for (int i = 2; i <= n; i++) {
		if (a[i] < a[i - 1]) flag = 0;
	}
	if (flag) {
		for (int i = 1; i <= m; i++) cout << ed[i] << " ";
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			ans[a[j]]++;
			j = ed[a[j]];
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0; 
}
// ÊäÁË =(:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    £¨ÀáÈçÓêÏÂ£© 
