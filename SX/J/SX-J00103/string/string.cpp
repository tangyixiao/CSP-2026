#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[200005], sum;
char c;
string s = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		for (int j = 0; j < a[i]; j++) {
			s += c;
		}
	}
	for (int i = 0; i <= s.size() / 2; i++) {
		if (s[i] != s[s.size() - i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
