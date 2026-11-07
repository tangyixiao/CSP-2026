#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//100f
const int maxn = 2e5 + 5;

ll n, j;
ll L, mid, sum;
ll a[maxn], jian[maxn];
char c[maxn];
ll ans;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L += a[i];
	}
	if (L % 2 == 1) mid = (L - 1) / 2;
	else mid = L / 2;
	j = n;
	for (int i = 1; i <= n; i++) {
		ll cnt = a[i];
		sum += a[i];
		if (sum > mid) cnt = cnt - (sum - mid);
		for (; j >= i; j--) {
			ll rea = a[j] - jian[j];
			if (cnt >= rea) {
				if (c[i] != c[j]) ans += rea;
				jian[j] = a[j];
				cnt -= rea;
			}
			else {
				jian[j] += cnt;
				jian[i] = a[i];
				if (c[i] != c[j]) ans += cnt;
				cnt = 0;
			}
			if (cnt == 0) break;
		}
		
		
		
		if (sum == mid) break;
	}
	
	cout << ans;
	return 0;
} 
