#include <bits/stdc++.h>
using namespace std;
int n, m, maxn;
string ans;

struct jgt {
	int x, len;
	string a;
};

string er(int x) {
	string b;
	while (x > 0) {
		char c = x % 2 + '0';
		b = b + c;
		x /= 2;
	}
	return b;
}

bool cmp(jgt p, jgt q) {
	return p.x > q.x;
}

string f2(jgt y) {
	while (y.len < maxn) {
		y.a = y.a + '0';
		y.len++;
	}
	return y.a;
}

string cp(jgt p, string q) {
	int l = p.len;
	for (int i = 0; i < l; i++) {
		if (p.a[i] != q[i])
			q[i] = 0;
		else
			continue;
	}
	return q;
}

void bak(string q) {
	long long r = 1, cnt = 0;
	for (int i = 0; i < q.size(); i++) {
		long long w = 1LL * (q[i] - '0') * r;
		r *= 2;
		cnt += w;
	}
	cout << cnt;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	vector<jgt> t(n + 2);
	for (int i = 0; i < n; i++) {
		cin >> t[i].x;
		t[i].a = er(t[i].x);
		t[i].len = t[i].a.size();
	}
	sort(t.begin(), t.end(), cmp);
	if (m == 1) {
		cout << t[0].x;
		return 0;
	}
	if (m == 2) {
		string abc = cp(t[1], t[0].a);
		cout << t[1].a << " " << t[0].a << "\n";
		bak(abc);
		return 0;
	}
	maxn = t[0].len;
	t[0].a = f2(t[0]);
	for (int i = 1; i < m; i++) {
		t[i].a = f2(t[i]);
		ans = cp(t[i], ans);
	}
	bak(ans);
	return 0;
}