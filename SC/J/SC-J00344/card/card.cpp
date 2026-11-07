#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, m;
int a[500002];
int pos[500002];
int cnt[300002];
int f[500002];
bool fact[500002];

void init(int x) {
	memset(fact, 0, sizeof(fact));
	for(int i = x; i <= n; i++) {
		fact[i] = 1;
		if (pos[i] != -1 && pos[i] >= x && fact[pos[i]]) {
			for(int j = pos[i]; j < i; j++) fact[j] = 0;
		}    
	}
	for(int i = x; i <= n; i++) {
		if (fact[i]) {
			cnt[a[i]]++;
		}
	}
//	for(int i = 1; i <= n; i++) cout << d[i] << " ";
//	cout << "\n";
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if (f[a[i]] == 0) {
			f[a[i]] = i;
			pos[i] = -1;
		} else {
			pos[i] = f[a[i]];
			f[a[i]] = i;
		}
//		cout << pos[i] << " ";
	}
//	cout << "\n";
	for(int i = 1; i <= n; i++) {
		init(i);
	}
	for(int i = 1; i <= m; i++)cout << cnt[i] << " ";
	return 0;
}