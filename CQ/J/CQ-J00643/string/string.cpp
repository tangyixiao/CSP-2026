#include<bits/stdc++.h>
using namespace std;
const int N = 4e5 + 5;
typedef long long ll;
int n;
int a[N];
char c[N];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("string6.in", "r", stdin);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	if(n == 1) {
		cout << 0;
		return 0;
	}
	ll ans = 0;
	int l = 1, r = n;
	ll sum1 = a[1], sum2 = a[n];
	char cl = c[1], cr = c[n];
	while(l < r) {
		if(sum1 < sum2) {
			if(cl != cr) {
				ans += sum1;
			}
			sum2 -= sum1;
			sum1 = 0;
		}else {
			if(cl != cr) {
				ans += sum2;
			}
			sum1 -= sum2;
			sum2 = 0;
		}
		if(sum1 == 0) {
			l++, sum1 = a[l], cl = c[l];
		}
		if(sum2 == 0) {
			r--, sum2 = a[r], cr = c[r];
		}
	}
	cout << ans;
}
