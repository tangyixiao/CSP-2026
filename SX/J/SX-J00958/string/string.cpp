#include <bits/stdc++.h>
using namespace std;
const int Q = 1e9+10;
long long cnt;
int a[Q];
long long ans;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> cnt;
	for (int i = 1; i <= cnt; i++) {
		cin >> a[i] >> s[i];
		ans += a[i];
	}
	cout << ans;
	return 0;
}
