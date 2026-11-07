#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 500005;
ll n, m;
ll a[N], en[N], sum[N], cnt_num[N];
inline void read(ll &x) {
	x = 0;
	char ch = getchar();
	while (!isdigit(ch)) ch = getchar();
	while (isdigit(ch)) x = (x << 1) + (x << 3) + ch - '0', ch = getchar();
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	read(n), read(m);
	for (ll i = 1; i <= n; i++) {
		read(a[i]);
		en[a[i]] = max(en[a[i]], i);
		sum[i] = 1;
	}
	for (ll i = 1; i <= n; i++) {
		sum[en[a[i]] + 1] += sum[i];
		cnt_num[a[i]] += sum[i];
	}
	for (ll i = 1; i <= m; i++) printf("%lld ", cnt_num[i]);
	printf("\n");
	return 0;
}