#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

#define int long long

int n, m; 
int a[200010];
int len;
int ii;
string s[200010];
int ans;

int Len(int x) {
	int len = 0;
	while (x > 0) {
		x >>= 1;
		len++;
	}
	return len;
}

bool CMP(string x, string y) {
	return x[ii] > y[ii];
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
//		len = max(len, Len(a[i]));
		int l = 0, t = a[i];
		while (t > 0) {
			s[i] += ((t % 2) + '0');
			t >>= 1;
			l++;
		}
		len = max(len, l);
	}
	for (int i = 1; i <= n; i++) while (s[i].size() < len) s[i] += "0";
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		len = max(len, Len(a[i]));
//	}
//	cout << len;
	for (ii = len - 1; ii >= 0; ii--) {
		sort(s + 1, s + n + 1, CMP);
//		cout << ii << ' ';
//		for (int i = 1; i <= n; i++) cout << s[i] << ' ';
//		cout << s[m][ii];
//		cout << endl;
		if (s[m][ii] == '0') continue;
		ans += (1 << ii);
		int i;
		for (i = m + 1; i <= n && s[i][ii] == '1'; i++);
		n = i - 1;
//		cout << ans;
	}
	cout << ans << endl;
//	cout << 1;
	return 0;
}
/*
4
2
3
15
12
12
*/
