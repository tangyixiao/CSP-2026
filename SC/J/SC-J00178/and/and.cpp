#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5 + 5;

struct node {
	int s;
	vector <int> v;
}f[35];

int n, m;
ll a[N], maxn = 0;

inline void zi(ll x,int idx) {
	for (int i = 0; (1 << i) <= x; i++) if ((1 << i) & x) f[i].s++, f[i].v.push_back(idx);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i], zi(a[i], i);
	
	for (int i = 32; i >= 0; i--) {
		if (f[i].s >= m) {
			sort(f[i].v.begin(), f[i].v.end(), [](int x, int y){return a[x] > a[y];});
			
			maxn = a[f[i].v[0]];
			for (int j = 0; j < m; j++) {
				maxn &= a[f[i].v[j]];
			}
			break;
		}
	}
	
	cout << maxn << '\n';
	
	return 0;
}