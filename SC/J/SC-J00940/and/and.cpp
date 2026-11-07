#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, m;
int a[N];
int msk;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i)scanf("%d", &a[i]);
	for (int i = 29; ~i; --i) {
		int cur = msk | (1 << i), cnt = 0;
		for (int j = 1; j <= n; ++j) {
			if((a[j] & cur) == cur)++cnt;
		}
		if(cnt >= m)msk = cur;
	}
	printf("%d", msk);
	return 0;
}