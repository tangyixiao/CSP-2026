#include<bits/stdc++.h>
using namespace std;
long long n, m, a[200010], cnt[31];
string s[200010];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	vector<int> b;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int x = a[i];
		while (x > 0) {
			s[i] += (x % 2) + '0';
			x /= 2;
		}
		for (int j = 0; j < s[i].size(); j++) {
			cnt[j] += (s[i][j] == '1');
		}
		b.push_back(i);
	}
	for (int i = 30; i >= 0; i--) {
		if (cnt[i] != 0) {
			if (cnt[i] >= m) {
				vector<int> c;
				for (int j = 30; j >= 0; j--) cnt[j] = 0;
				for (auto x : b) {
					if (s[x][i] == '1') {
						c.push_back(x);
					}
				}
				b = c;
				if (i > 0) {
				for (auto x : b) {
					if (s[x][i - 1] == '1') {
						cnt[i - 1]++;
					}
				}
				}
//				for (auto x : b) {
//					cout << x << " ";
//				}
//				cout << "\n";
			}
		}
		if (b.size() == m) {
			long long ans = 2147483647;
			for (auto x : b) {
				ans &= a[x];
			}
			cout << ans;
			return 0;
		}
	}
	for (auto x : b) {
					cout << x << " ";
				}
				cout << "\n";
	long long ans = 2147483647;
	for (int i = 0; i < m; i++) {
//		cout << b[i] << " " << a[b[i]] << "\n";
		ans &= a[b[i]];
	}
	cout << ans;
	return 0;
}
