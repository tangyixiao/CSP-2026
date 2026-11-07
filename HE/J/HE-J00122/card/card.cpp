#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	long long n, m;
	cin >> n >> m;
	long long a[n + 1];
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	long long ans[m + 1];
	if (m == 1) {
		cout << n;
		return 0;
	}
	
	else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			vector<long long> b;
			for (int j = i; j <= n; j++) {
				bool flag = 0;
				for (int k = 0; k < b.size(); k++) {
					if (b[k] == a[j]) {
						flag = 1;
						for (int l = k + 1; l < b.size(); l++) {
							b[l] = 0;
						}
					}
				}
				if (flag == 1) {
					b.push_back(a[j]);
				}
			}
			for (int j = 0; j <= b.size(); j++) {
				if (ans[b[j]] == 0) {
					ans[b[j]] += 1;
				}
			}
		}
	}
	
	else {
		for (int i = 1; i <= n; i++) {
			vector<long long> b(n + 1);
			for (int j = i; j <= n; j++) {
				bool flag = 0;
				for (int k = 0; k < b.size(); k++) {
					if (b[k] == a[j]) {
						flag = 1;
						for (int l = k + 1; l < b.size(); l++) {
							b[l] = 0;
						}
					}
				}
				if (flag) b.push_back(a[j]);
			}
			for (int j = 0; j <= b.size(); j++) {
				if (ans[b[j]] == 0) {
					ans[b[j]] += 1;
				}
			}
		}
	}
	
	
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	
	return 0;
}
