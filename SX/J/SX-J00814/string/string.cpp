#include <bits/stdc++.h>
using namespace std;
int n, a[200005], num;
long long ans = 0;
string s;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		num += a[i];
		for (int j = 0; j < a[i]; j++) {
			s += c[i];
		}
	}
	for (int i = 0; i < num / 2; i++) {
		if (s[i] != s[num - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}
