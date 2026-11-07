#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//40f
const int maxn = 5e5 + 5;

int n, m;
int a[maxn];
int sum[maxn], ans[maxn];
int des[maxn], last[maxn];

void init() {
	memset(sum, 0, sizeof sum);
	memset(des, 0, sizeof des);
	memset(last, 0, sizeof last);
}

void solve (int cnt) {
	init();
	int ii = 1;
	for (int i = cnt; i <= n; i++) {
		if (sum[a[i]] == 0) {
			des[ii++] = a[i];
			sum[a[i]] = 1;
			last[a[i]] = ii - 1;
		}
		else {
//			ii = last[a[i]];
			for (int j = last[a[i]] + 1; j <= ii; j++) {
				sum[des[j]]--;
				des[j] = 0;
			}
			ii = last[a[i]] + 1;
		}
	}
	for (int i = 1; i <= m; i++) ans[i] += (sum[i] == 0 ? 0 : 1);
}

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		solve(i);
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
