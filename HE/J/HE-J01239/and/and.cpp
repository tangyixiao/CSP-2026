#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n, m;
vector<int> v, a ;
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		int x; cin >> x;
		a.push_back(x);
	}
	for (int i = 30; i >= 0; i --) {
		int sum = 0;
		for (auto j : a) {
			if (j & (1 << i)) sum ++;
		}
		v.clear();
		if (sum >= m) {
			for (auto j : a) {
				if (j & (1 << i)) v.push_back(j);
			}
			a.clear();
			for (auto j : v) a.push_back(j);
		}
	}
	  
	int ans = a[0];
	for (auto j : a) ans &= j;
	cout << ans << '\n';	
	return 0;
}
