#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005;
int n, m, a[N];
int last[N], cnt[N], b[N], c[N];
int calc () {
	if (n <= 5000) return 0;
	int flag = 1;
//	cout << "TTT: " << n << '\n';
	for (int i = 1; i < n; i++) {
//		cout << "DDD" << a[i] << ' ';
		if (a[i] > a[i + 1]) {
			flag = 0;
		}
		c[a[i]]++;
	}
	c[a[n]]++;
	if (flag == 0) {
		return 0;
	} else {
		int sum = 0;
		for (int i = 1; i <= m; i++) {
//			cout << "D:" << c[i] << ' ';
			sum += c[i];
			printf ("%d ", sum);
		}
	
//		printf ("\n");
		return 1;
	}
}
int main () {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf ("%d", &a[i]);
	}
	if (calc ()) {
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) last[j] = 0;
		for (int j = 0; j <= n; j++) b[j] = 0;
		int idx = 0;
		for (int j = i; j <= n; j++) {
			if (!last[a[j]]) {
				b[++idx] = a[j];
				last[a[j]] = idx;
//				cout << "DEB:" << a[j] << ' ' << idx << '\n';
			} else {
//				cout << "TT:" << a[j] << ' ' << last[a[j]] << '\n';
				idx = last[a[j]];
				for (int j = 1; j <= m; j++) {
					last[j] = 0;
				}
				for (int j = 1; j <= idx; j++) last[b[j]] = j;
			}
		}
//		printf ("DDDD:");
		for (int j = 1; j <= idx; j++) {
			cnt[b[j]]++;
//			printf ("%d ", b[j]);
		}
//		printf ("\n");
	}
	for (int i = 1; i <= m; i++) printf ("%d ", cnt[i]);
	printf ("\n");
	return 0;
}
