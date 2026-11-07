#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 200005;
ll n;
ll a[N], b[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	char x;
	ll sum = 0;
	for (ll i = 1; i <= n; i++) {
		scanf("%lld %c ", &a[i], &x);
		b[i] = x - 'a' + 1;
		sum += a[i];
	}
	ll len_l = 0, tot_r = sum, res = 0, i = 0, j = n + 1;
	while (len_l < tot_r) {
		ll len_r = sum - tot_r;
		if (len_l > len_r) {
			j--;
			if (b[i] != b[j]) res += min(len_l - len_r, a[j]);
			tot_r -= a[j];
		}
		else if (len_l < len_r) {
			i++;
			if (b[i] != b[j]) res += min(len_r - len_l, a[i]);
			len_l += a[i];
		}
		else {
			i++;
			len_l += a[i];
		}
	}
	printf("%lld\n", res);
	return 0;
}