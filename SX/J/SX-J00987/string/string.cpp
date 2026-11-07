#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int num[MAXN + 5];
char c[MAXN + 5];

int main() {
	ios::sync_with_stdio();
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> num[i] >> c[i];
	int l = 1, r = n;
	long long ans = 0;
	while (l < r) {
		int ttt = 0, tl = l, tr = r;
		if (num[l] > num[r])
			ttt = num[r], num[l] -= num[r], r--;
		else if (num[l] < num[r])
			ttt = num[l], num[r] -= num[l], l++;
		else
			ttt = num[l], l++, r--;
		if (c[tl] != c[tr])
			ans += ttt;
	}
	cout << ans << endl;
	return 0;
}
