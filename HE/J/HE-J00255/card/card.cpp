#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 10;
long long n, m;
long long a[N];
long long cnt[N];
string s;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long x = 0;
	while (x <= n) {
		for (int i = x + 1; i <= n; i++) {
			for (int j = 1; j <= s.size(); i++) {
				if (!s.find(a[i])) {
					s += a[i];
				}else {
					if (s[i] == a[i]) {
						s[i] = ' ';
					}
					long long x = j;
					for (int k = x; k <= s.size(); k++) {
						s[i] = ' ';
					}
					s += a[i];
				}
			}
		}
		for (int i = 1; i <= s.size(); i++) {
			cnt[s[i]]++;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}
