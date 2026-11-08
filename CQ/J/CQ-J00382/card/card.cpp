#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1), ans(m + 2, 0);
//	vector<int> b = a;
	vector<int> fun;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 1; i <= n; ++i) {
		fun.clear();
		for (int k = i - 1; k < n; ++k) {
			bool f = false;
			int pos = lower_bound(fun.begin(), fun.end(), a[k]) - fun.begin();
			if (fun[pos] == a[k] && pos < (int)fun.size()) {
				for (int j = pos; j < n; ++j) {
					fun[j] = 0;
				}
				continue;
			}
			fun.push_back(a[k]);
				
			for (int i = pos; i < (int)fun.size(); ++i) {
				fun[i] = 0;
			}
			for (int i = 0; i < (int)fun.size(); ++i) ans[fun[i]]++;
		}
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
	cout << endl; 
} 
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
