#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 2e5 + 10;

int n, m = 0;

struct Node {
	int l;
	char ch;
} a[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> a[i].l >> a[i].ch, m += a[i].l;
	if (m <= 1e8) {
		string s = " ";
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= a[i].l; j++)
				s += a[i].ch;
		int ans = 0;
		for (int i = 1; i <= m / 2; i++) 
			if (s[i] != s[m - i + 1])
				++ans;
		cout << ans << '\n';
		return 0;
	}
	return 0;	
}
/*
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 17, 18, 19, 20, 21

68 pts
*/
