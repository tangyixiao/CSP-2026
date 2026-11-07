#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5 + 5;

struct node {
	ll v;
	char c;
}a[N];

int n, m, cnt = 0;
ll res = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	ll v;
	char c, lac = '$';
	for (int i = 1; i <= n; i++) {
		cin >> v >> c;
		
		if (c != lac) a[++cnt] = {v, c};
		else a[cnt].v += v;
		
		lac = c;
	}
	
	queue <node> l, r;
	int val1 = 1, val2 = 1;
	for (int i = 1, j = cnt; i <= j; i += val1, j -= val2) {
		val1 = val2 = 1;
		if (a[i].v > a[j].v) {
			l.push({a[j].v, a[i].c});
			r.push({a[j].v, a[j].c});
			a[i].v -= a[j].v;
			val1 = 0;
		}
		else if (a[i].v < a[j].v) {
			l.push({a[i].v, a[i].c});
			r.push({a[i].v, a[j].c});
			a[j].v -= a[i].v;
			val2 = 0;
		}
		else if (a[i].v == a[j].v) {
			l.push({a[i].v, a[i].c});
			r.push({a[j].v, a[j].c});
		}
	}
	
	while (!l.empty() && !r.empty()) {
		node x = l.front(), y = r.front();
		l.pop(), r.pop();
		
		if (x.c != y.c) res += x.v;
	}
	
	cout << res << '\n';
	
	return 0;
}