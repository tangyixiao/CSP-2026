#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+10;
ll n, m, arr[N][35], brr[N], crr[N], t, s[N], r, sum;

void check(ll id, ll a) {
	ll l = 0;
	while (a != 0) {
		arr[id][++l] = a % 2;
		if (a % 2 == 1)
			crr[l]++;
		a /= 2;
	}
}

ll cmp(ll a, ll b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> brr[i];
	sort(brr + 1, brr + n + 1, cmp);
	for (int i = 1; i <= n; i++)
		check(i, brr[i]);
	for (int i = 30; i >= 1; i--) {
		if (crr[i] < m)
			continue;
		t = i;
		break;
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i][t] == 1)
			s[++r] = i;
		if (r == m)
			break;
	}
	ll d = 1;
	for (int i = 1; i <= t; i++) {
		ll gkx = arr[s[1]][i];
		for (int j = 2; j <= m; j++) {
			gkx &= arr[s[j]][i];
		}
		sum += gkx * d;
		d *= 2;
	}
	cout << sum;
	return 0;
}
