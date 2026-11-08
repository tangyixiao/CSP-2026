#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[200005];
string s[200005];
int fail[200005];
int sum[35], sumin[200005];
string Get(int x) {
	string res = ""; 
	while(x) {
		res = char('0' + x % 2) + res;
		x /= 2;	
	}
	int len = res.size();
	for (int i = 1; i <= 31 - len; i++) {
		res = "0" + res;
	}
	return res;
}
bool f[35];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int Mx = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		Mx = max(Mx, a[i]);	
		s[i] = Get(a[i]);
		for (int j = 0; j < 31; j++) {
			if (s[i][j] == '1') {
				sum[j]++;
			}
		}
	}
	int st = 0, ans = 0;
	while(st < 31) {
		if (sum[st] < m) {
			st++;
			continue;
		}
		for (int i = 1; i <= n; i++) fail[i] = 0;
		for (int i = 0; i < 31; i++) sumin[i] = sum[i], f[i] = 0;
		for (int i = st; i < 31; i++) {
			if (sumin[i] >= m) {
				f[i] = 1;
				for (int j = 1; j <= n; j++) {
					if (fail[j]) continue;
					if (s[j][i] == '0') {
						fail[j] = 1;
						for (int k = i; k < 31; k++) {
							if (s[j][k] == '1') {
								sumin[k]--;
							}
						}			
					} 
				}
			}			
		}
		int cnt = 0;
		for (int i = 0; i < 31; i++) {
			if (f[i]) {
				cnt = cnt + (1 << (31 - 1 - i)); 
			}
		}
		st++;
		ans = max(ans, cnt); 
	}
	cout << ans;
	return 0;
}

