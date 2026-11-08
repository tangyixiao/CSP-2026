#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
typedef long long ll;
int n, m;
ll a[N], b[N];
int mp[N];
string s[N], s1[N];
void bian(int x) {
	int tot = 0 ;
	for (int i = 1; i <= n; i++) {
		if(s[i][x] == '1') {
			s1[++tot] = s[i];
			b[tot] = a[i];
		}
	}
	for (int i = 0; i <= 32; i++) mp[i] = 0;
	n = tot;
	for (int i = 1; i <= n; i++) {
		a[i] = b[i];
		s[i] = s1[i];
		for (int j = 0; j < int(s[i].size()); j++) {
			if(s[i][j] == '1') {
				mp[j]++;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("and5.in", "r", stdin);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ll x = a[i], tot = 0;
		if(a[i] == 0) s[i] = "0";
		else s[i] = "00000000000000000000000000000000";
		while(x) {
			if(x % 2) mp[tot]++, s[i][tot] = '1';
			else s[i][tot] = '0';
			x >>= 1;
			tot++;
		}
	}
	ll ans = 0;
	for (int i = 30; i >= 0; i--) {
		if(mp[i] >= m) {
			bian(i);
			ans += (1ll << i);
		}
	}
	cout << ans;
}
