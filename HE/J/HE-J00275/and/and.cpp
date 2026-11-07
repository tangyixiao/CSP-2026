#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 2e5 + 9;
int n, m, a, ans;
pair <string, int> s[N];

inline ll read();

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	n = read(), m = read();
	for (int i = 1; i <= n; i++) {
		a = read();
		s[i].second = a;
		while (a) {
			s[i].first.push_back((a & 1 ? '1' : '0'));
			a >>= 1;
		}
		s[i].first.resize(30, '0');
		reverse(s[i].first.begin(), s[i].first.end());
	}
	for (int j = 0; j < 30; j++) {
		vector <pair <string, int> > tmp;
		for (int i = 1; i <= n; i++) {
			if (s[i].first[j] == '1') {
				tmp.push_back(s[i]);
			}
		}
		if ((int)tmp.size() < n && (int)tmp.size() >= m) {
			n = tmp.size();
			for (int i = 1; i <= n; i++) {
				s[i] = tmp[i - 1];
			}
		}
	}
	ans = s[1].second;
	for (int i = 2; i <= m; i++) {
		ans &= s[i].second;
	}
	printf("%d", ans);
	return 0;
}

inline ll read() {
	ll w = 0, f = 1, c = getchar();
	while (!isdigit(c)) {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (isdigit(c)) {
		  w = w * 10 + (c ^ 48);
		  c = getchar();
	}
	return w * f;
}
