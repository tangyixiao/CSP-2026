#include <bits/stdc++.h>
using namespace std;
long long n, m;
string s;
char a;

long long hw(string t) {
	long long ans = 0, l = t.size() - 1;
	for (int i = 0; i <= l / 2; i++) {
		if (t[i] != t[l - i]) {
			ans++;
		}
	}
	return ans;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> m >> a;
		for (int i = 1; i <= m; i++) {
			s += a;
		}
	}
	cout << hw(s);
	return 0;
}
