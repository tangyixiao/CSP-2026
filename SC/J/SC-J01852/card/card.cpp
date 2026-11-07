#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int a[500001];
int cnt[300001];

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		vector<int> zm;
		for (int j = i; j <= n; j++) {
			int wz;
			bool flag = false;
			for (int k = 0; k < zm.size(); k++) {
				if (zm[k] == a[j]) {
					flag = true;
					wz = k;
					break;
				}
			}
			if (flag) {
				while (zm.size() - 1 > wz) {
					zm.pop_back();
				}
			}
			else {
				zm.push_back(a[j]);
			}
		}
		for (int j : zm) {
			cnt[j]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}