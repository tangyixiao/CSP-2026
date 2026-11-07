#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 2e5 + 3;
int a[N];
bitset<31> x[N]; 
vector<int> mask[2]; 
int op = 0;
int n, m;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		a[i] = t;
		mask[0].push_back(i);
		for (int j = 0; t; t >>= 1, j++) {
			if (t & 1) x[i][j] = 1;
		}
	}
	int ans = 0;
	for (int i = 30; i >= 0; i--) {
		int cnt = 0;
		for (int j = 0; j < mask[op].size(); j++) {
			if (x[mask[op][j]][i]) cnt++, mask[1-op].push_back(mask[op][j]);
		}
		if (cnt < m) {
			mask[1-op].clear();
			continue;	
		}
		ans |= (1 << i);
		mask[op].clear();
		op = 1-op;
	}
	cout << ans;
	
	return 0;
}