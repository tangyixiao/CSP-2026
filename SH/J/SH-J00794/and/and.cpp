#include <bits/stdc++.h>
using namespace std;
#define N 200010
int n, m, a[N], ans;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 29; i >= 0; i--) {
		int cnt = 0;
		for(int j = 1; j <= n; j++)
			cnt += ((a[j] >> i) & 1);
		if(cnt < m) continue;
		for(int j = 1; j <= n; j++)
			if(((a[j] >> i) & 1) != 1) a[j] = 0;
		ans += (1 << i);
	}
	cout << ans << endl;
	return 0;
}

