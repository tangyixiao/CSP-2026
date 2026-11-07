#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 3e5 + 10;

int h[N];
map<int, int> mp1, mp;
int n, m;

void fn(int x, int j) {
	if (mp1[x] == 0) {
		mp1[x] = 1;
	} else {
		for (int i = j - 1; i >= 1; i--) {
			if (mp1[h[i]] == 1) {
				mp1[h[i]] = 0;
			}
			if (h[i] == h[j]) {
				mp1[h[i]] = 1;
				return ;
			}
		}
	}
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			fn(h[j], j);
		}
		for (int k = 1; k <= m; k++) {
			mp[k] += mp1[k];
//			cout << mp1[k] << " ";
			mp1[k] = 0;
		}
//		cout << endl;
	}
//	cout << endl;
	for (int i = 1; i <= m; i++) {
		cout << mp[i] << " ";
	}
	return 0;
}
