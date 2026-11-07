#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
long long n, ans, a[N];
char c[N];

//priority_queue<int,vector<int>,greater<int> >q;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf(" %lld %c ", a + i, c + i);
	}
	int j = n;
	for (int i = 1; i <= n && i < j; i++) {
		while ((j >= 1) && (i < j)) {
//			printf("\n%lld %lld  不删是sb", i, j);
//			for (int k = 1; k <= n; k++) {
//				printf("%lld ", a[k]);
//			}
//			printf("不删是sb\n");
//			printf("00 不删是sb\n");
			if (i == j) {
				break;
			}
//			printf("01 不删是sb\n");
			if (a[i] == 0)
				break;
//			printf("10 不删是sb\n");
			if (a[i] < 0) {
				a[j] += a[i] * -1;
				a[i] = 0;
				break;
			}
			if (a[j] == 0)
				j--;
//			printf("11 不删是sb\n");
			if (c[i] == c[j]) {
				a[i] -= a[j];
				a[j] = 0;
			} else {
				if (a[i] == a[j]) {
					ans += a[i];
					a[i] = 0;
					a[j] = 0;
//					printf("1");
				} else if (a[i] > a[j]) {
					ans += a[j];
					a[i] -= a[j];
					a[j] = 0;
//					printf("2");
				} else {
					ans += a[i];
					a[j] -= a[i];
					a[i] = 0;
//					printf("3");
				}
			}
		}
	}
	printf("%lld\n", ans);
//	printf("不删是sb\n");
//	for (int i = 1; i <= n; i++) {
//		printf("%lld ", a[i]);
//	}
	return 0;
}
