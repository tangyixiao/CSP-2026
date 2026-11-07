#include <bits/stdc++.h>
using namespace std;
long long n, b, ans;
string s;
bool vis;
pair<int, char> a[200005];

bool check(int i, int j) {
	if (s[i] != s[j])
		return 0;
	else
		return 1;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i].first; j++) {
			s += a[i].second;
		}
	}
	if (s.size() % 2 == 1)
		vis = 1;
	if (vis)
		for (int i = 0, j = s.size() - 1; i < (1 + s.size()) / 2 - 1, j > (1 + s.size()) / 2 - 1; j--, i++)
			if (!check(i, j))
				ans++;
	if (!vis)
		for (int i = 0, j = s.size() - 1; i < 1 + s.size() / 2, j >= s.size() / 2; j--, i++) {
			if (!check(i, j))
				ans++;
		}
	cout << ans;
	return 0;
}
