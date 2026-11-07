#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 5;
int a[MAXN];
string s[MAXN];
int maxl = 0;
//string s;
int dp[MAXN];
int id;
int p;
void transfer (int x , int i) {
	while (x > 0) {
		int y = x % 2;
		s[i] += y + '0';
		x /= 2;
	}
}
int ans = 0;
void transfer2 (int x) {
	int t = 0;
	for (int i = maxl - 1; i >= p; i--) {
		ans += pow (2 , t) * (s[id][i] - '0');
		t++;
	}
	
}
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	freopen ("and.in" , "r" , stdin);
	freopen ("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	int len = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		transfer (a[i] , i);
		if (len > s[i].size ()) {
			len = s[i].size ();
		}
		if (maxl < s[i].size ()) {
			maxl = s[i].size ();
		}
	} 
	for (int i = 1; i <= n; i++) {
		if (maxl == s[i].size ()) {
			id = i;
		}
	}
	// 按照最多重复计算
	for (int i = 0; i < len; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (s[j][i] == '1') {
				cnt++;
			}
		}
		if (cnt < m) {
			 p = i - 1;
			 break;
		} 
	} 
	transfer2 (p);
	cout << ans << endl;
//	cout << len;
//	int n;
//	cin >> n;
//	transfer (n);
//	for (int i = s.size () - 1; i >= 0; i--) {
//		cout << s[i];
//	}
}