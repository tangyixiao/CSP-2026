#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int n;
ll m, a[200020];
char c[200020];
inline void solve1() {
	string s;
	for (int i = 1; i <= n; i ++) {
		while (a[i] --)
			s.push_back(c[i]);
	}
	ll answer = 0;
	for (int i = 0, j = m - 1; i <= j; i ++, j --) {
		if (s[i] != s[j])
			answer ++;
	}
	cout << answer;
}
inline void solve2() {
	int i = 1, j = n;
	ll answer = 0;
	while (m && i <= j) {
		if (a[i] < a[j])
			m -= a[i], a[j] -= a[i], answer += a[i] * (c[i] != c[j]), a[i] = 0;
		else
			m -= a[j], a[i] -= a[j], answer += a[j] * (c[i] != c[j]), a[j] = 0;
		if (a[i] == 0)
			i ++;
		if (a[j] == 0)
			j --;
	}
	cout << answer;
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> c[i];
		m += a[i];
	}
	if (m <= 1000000)
		solve1();
	else
		solve2();
}
