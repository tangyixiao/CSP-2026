#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long n, m;
long long a[200010];

long long cmp(long long x, long long y) {
	return x > y;
}

string er(int x) {
	string s = "";
	while (x > 1) {
		s += (x % 2) + '0';
	}
	s += '1';
	return s;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	string ss[200010];
	string s1 = er(a[1]);
	for (int i = 2; i <= m; i++) {
		string s2 = er(a[i]), s3;
		long long u = max(s1.size(), s2.size());
		for (int j = 1; j <= u ; j++) {
			if (s1[i] == 1 && s2[i] == 1)
				s3[i] = 1;
			else
				s3[i] = 0;
		}
		s1 = s3;
	}
	long long ans = 0, p = 1;
	for (int i = s1.size(); i >= 1; i--) {
		ans += s1[i] * p;
		p *= 10;
	}
	cout << ans;
	return 0;
}
