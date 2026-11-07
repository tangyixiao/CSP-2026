#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;
const int maxm = 3e5 + 5;
int n, m;
int cnt[maxm];
int a[maxn];
int ans[maxm];

void t(int st) {
	bool flag = 0;
	int c[maxm];
	for(int i = 1;i <= m;i++){
		c[i] = cnt[i];
	}
	for (int i = st; i <= n; i++) {
		if (cnt[a[i]] < 2 && !flag) {
			ans[a[i]]++;
		} else if (cnt[a[i]] >= 2 && !flag) {
			flag = 1;
			st = i;
		} else if (flag && a[i] != a[st]) {
			c[a[i]]--;
			continue;
		} else if (flag && a[i] == a[st] && c[a[st]] > 2) {
			c[a[st]]--;
			continue;
		} else if (flag && a[i] == a[st] && c[a[st]] == 2) {
			flag = 0;
			ans[a[st]]++;
		}
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 1; i <= n; i++) {
		cnt[a[i - 1]]--;
		t(i);
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
