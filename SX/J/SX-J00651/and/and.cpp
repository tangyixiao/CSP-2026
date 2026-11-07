#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5, M = 35;
int n, m;
int mx;
int ans;
int a[N];
int cnt[M];
vector<int> pos[M];

void count1(int x) {
	int bit = 1, y = x;
	while (x) {
		if (x & 1)
			cnt[bit]++, pos[bit].push_back(y);
		x >>= 1;
		bit++;
	}
	mx = max(mx, bit);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		count1(a[i]);
	}
	for (int i = mx; i >= 1; i--) {
		if (cnt[i] >= m) {
			ans |= (1 << (i - 1));
			vector<int> tmp;
			tmp = pos[i];
			for (int j = 1; j <= 30; j++)
				pos[j].clear(), cnt[j] = 0;
			for (auto j : tmp) {
				count1(j);
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
