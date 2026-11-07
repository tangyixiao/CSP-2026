#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 2e5 + 5;
int n, cnt;
int a[N];
char c[N];
string s;
signed main() {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		s += string (a[i], c[i]);
	}
	int len = s.size ();
	if (len % 2 == 0) {
		len /= 2;
	}
	else {
		len = (len - 1) / 2;
	}
	for (int i = 0; i < len; i++) {
		if (s[i] != s[s.size () - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}