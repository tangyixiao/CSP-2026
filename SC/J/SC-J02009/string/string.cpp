#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5+50;
int n, a[maxn], len = 0, ans = 0;
char c[maxn];
string s;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
		len += a[i];
	}

	int x = (len / 2) - 1;
	for (int i = 0; i <= x; i++) {
		if (s[i] != s[len - i - 1]) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
