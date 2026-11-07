#include <bits/stdc++.h>
//#define tap puts("OK");
using namespace std;
#define int long long 
const int N = 2e5 + 5;
int n, cnt[N], mid, sum, ans;
int newc[N], m;
char a[N], newa[N];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	if(n == 1) {
		cout << 0;
		return 0;
	}
//	tap
	for(int i = 1;i <= n;i ++) {
		cin >> cnt[i] >> a[i];
		sum += cnt[i];
	}
//	tap
	mid = (sum >> 1);
	if(sum % 2 == 1) mid ++;
	int pos = 0;
	for(int i = 1;i <= n;i ++) 
		if(pos < mid && pos + cnt[i] > mid) {
			m ++;
			int count = 0;
			while(pos != mid) newc[m] = ++ count, pos ++;
			newa[m] = a[i];
			m ++;
			count = 0;
			while(pos <= cnt[i]) newc[m] = ++ count;
			newa[m] = a[i];
		} else 
			newc[++ m] = cnt[i], 
			newa[m] = a[i];
//	tap
	int l = 1, r = m;
	while(l < r) {
		if(newc[l] == 0) l ++;
		if(newc[r] == 0) r --;
		int exp = min(newc[l], newc[r]);
		newc[l] -= exp, newc[r] -= exp;
		if(a[l] != a[r]) ans += exp;
	}
//	tap
	cout << ans;
	return 0;
}