#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], ans[200005], cnt1, cnt2, id1, id2, sum;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		ans[i] = ans[i - 1] + a[i];
	}
	cnt1 = a[1], id1 = 1;
	cnt2 = a[n], id2 = n;
	for (int i = 2; ; ) {
		if (id1 >= id2) {
			break;
		}
		if (cnt1 > cnt2) {
			if (c[id1] != c[id2])
				sum += min(cnt1, cnt2);
			cnt1 -= cnt2;
			id2--;
			cnt2 = a[id2];
		} else if (cnt1 < cnt2) {
			if (c[id1] != c[id2])
				sum += min(cnt1, cnt2);
			cnt2 -= cnt1;
			id1++;

		} else {
			if (c[id1] != c[id2])
				sum += cnt1;
			id1++;
			id2--;
			cnt1 = a[id1];
			cnt2 = a[id2];
		}
	}
	cout << sum << endl;
	return 0;
}
