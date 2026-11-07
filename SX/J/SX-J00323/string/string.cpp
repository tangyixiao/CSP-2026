#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int a[N], n, sum, cnt, cnt2;
char ch[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	cnt = 1;
	cnt2 = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> ch[i];
	}
	for (int i = 1; i <= n; i++) {
		if (cnt >= cnt2)
			break;
		if (a[cnt] > a[cnt2]) {
			if (ch[cnt] != ch[cnt2])
				sum += a[cnt2];
			a[cnt] -= a[cnt2];
			cnt2--;
		} else if (a[cnt] < a[cnt2]) {
			if (ch[cnt] != ch[cnt2])
				sum += a[cnt];
			a[cnt2] -= a[cnt];
			cnt++;
		} else {
			if (ch[cnt] != ch[cnt2])
				sum += a[cnt];
			a[cnt] = 0;
			a[cnt2] = 0;
			cnt++;
			cnt2--;
		}
	}
	cout << sum;
	return 0;
}