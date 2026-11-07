#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int a[500009], b[300009], c[300009];

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		s = "";
		memset(b, 0, sizeof(b));
		for (int j = i; j <= n; j++) {
			if (b[a[j]] == 0) {
				s += a[j];
				b[a[j]]++;
			} else {
				for (int k = 0; k < s.size(); k++) {
					if (s[k] == a[j]) {
						s = s.substr(0, k);
						s += a[j];
					}
				}
			}
		}
		c[s[s.size() - 1] - '0']++;
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}