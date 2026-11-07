#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, a, ans;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	ll ssie = s.size();
	for (int i = 0; i < ssie / 2; i++) {
		if (s[i] != s[ssie + 1 - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
