#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 +10;
int n,m;
int a[N],ans[N],sum = LLONG_MIN;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		sum = max(sum,a[i]);
	}
	if (m == 1) {cout << sum;return 0;}
	if (m == n) {
		for (int i = 1; i <= n; i++) {
			a[i] &= a[i+1];
		}
		cout << a[n];
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i<= n; i++) {
			ans[i] = a[i] & a[i+1];
		}
		int cnt = INT_MIN;
		for (int i = 1; i <= n; i++) {
			cnt = max(cnt,ans[i]);
		}
		cout <<cnt;
		return 0;
	}
	return 0;
} 
