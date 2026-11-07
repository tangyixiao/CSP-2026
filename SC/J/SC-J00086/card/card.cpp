#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
#define ll long long
ll read() {
	ll f = 1, res = 0;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == '-') f = -1;
		ch = getchar();
	}
	while (isdigit(ch)) {
		res = res * 10 + ch - '0';
		ch = getchar();
	}
	return f*res;
}
int n, m, a[500005], b[500005], c[500005], t = 0;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = read();
	m = read();
	for (int i = 1; i <= n; i++) {
		a[i] = read();
	}
	for (int i = 1; i <= n; i++) {
		int s = 0;
		set<int>p;
		for (int j = i; j <= n; j++) {
			int x = p.size();
			p.insert(a[j]);
			if (p.size() == x) {
				for (int k = 1; k <= s; k++) {
					if (c[k] == a[j]) {
						s = k - 1;
						break;
					}
				}
				p.clear();
				p.insert(a[j]);
			}
			c[++s] = a[j];
		}
		for (int j = 1; j <= s; j++) {
			b[++t] = c[j];
		}
	}
	for (int i = 1; i <= m; i++) {
		int ans = 0;
		for (int j = 1; j <= t; j++) {
			if (b[j] == i) ans++;
		}
		cout << ans << " ";
	}
	return 0;
}