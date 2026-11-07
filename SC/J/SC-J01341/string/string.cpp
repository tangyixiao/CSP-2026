#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[200005];
char c[200005];
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
    int n;
    cin >> n;
    int m = 0;
    string s;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i] >> c[i];
    	m += a[i];
    	for (int j = 1; j <= a[i]; j++) {
    		s += c[i];
		}
	}
	int ans = 0;
	int r = m - 1;
	for (int l = 0; l < m / 2; l++) {
	    if (s[l] != s[r]) {
	    	ans++;
		}
		r--;
	}
	cout << ans;
	return 0;
}