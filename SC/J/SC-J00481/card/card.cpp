#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;
const int N = 500010;

int a[N];

void fp() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
}

int cnt[5000010];

int sum[5000010];

signed main() {
	fp();
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
		cnt[a[i]] ++;
	}
	
	for (int i = 1; i <= m; i ++) {
		sum[i] = sum[i - 1] + cnt[i];
	}
	
	for (int i = 1; i <= m; i ++)
		cout << sum[i] << ' ';
	
	return 0;
}
/*
唉，直接暴力+骗分吧


*/