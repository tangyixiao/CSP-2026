#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m;
stack<int> s;
ll a[500005], b[300005], c[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[a[j]] != 0) {
				while (!s.empty()) {

					if (s.top() == a[j]) {
						s.pop();
						b[a[j]]--;
						break;
					}
					b[s.top()]--;
					s.pop();
				}
			}
			s.push(a[j]);
			b[a[j]]++;
		}
		while (!s.empty()) {
			c[s.top()]++;
			b[s.top()]--;
			s.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << ' ';
	}
	return 0;
}

