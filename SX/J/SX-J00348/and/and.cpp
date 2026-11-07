#include <bits/stdc++.h>
using namespace std;
#define int long long
int m, n, cnt = 0, maxx = INT_MIN;
long long a[200005];



signed maxxx(long long b, long long c) {
	if (b > c)
		return b;
	else
		return c;
}

void work1(int floot, int ii, int sum) {
	if (floot == m + 1) {
		maxx = maxxx(maxx, sum);
		return;
	}
	for (int i = ii; i <= n; i++) {
//		if(floot==1) sum=a[i];
//		else sum==sum&a[i];
		if (floot == 1)
			work1(floot + 1, i + 1, a[i]);
		else
			work1(floot + 1, i + 1, sum & a[i]);
//			cout << maxx << " " << (a[i] &a[j]) << " " << i << " " << j << " " << a[i] << " " << a[j] << endl;
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", a[i]);
	}
	work1(1, 1, 0);
	printf("%lld", maxx);
	return 0;
}
