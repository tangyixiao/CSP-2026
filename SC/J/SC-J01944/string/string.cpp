#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long cnt = 0;
	string s;
	for (int i = 1; i <= n; i++) {
		int t;
		char a;
		cin >> t >> a;
		for (int i = 1; i <= t; i++) {
			s += a;
		}
	}
	long long r = s.size() - 1, l = 0;
	while (l <= r) {
		if (s[l] != s[r]) {
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt;
	return 0;
}