#include <bits/stdc++.h>
using namespace std;
string s;
int n, a, ans = 0;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> a >> c;
		while (a--) {
			s += c;
		}
	}
	int i = 0, j = s.size() - 1;
	while (i <= j) {
		if (s[i] != s[j]) {
			ans++;
		}
		i++, j--;
	}
	cout << ans;
	return 0;
}
