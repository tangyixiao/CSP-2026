#include <bits/stdc++.h>
#define int long long
#define pil pair <int, int>
using namespace std;
const int N = 2e5 + 10;
struct Node{
	int l, r;
	char c;
} a[N];
int n;
int len = 1;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		int x;
		cin >> x;
		a[i].l = len, a[i].r = len + x - 1;
		len = a[i].r + 1;
		cin >> a[i].c;
	}
	len -= 1;
//	cout << len << '\n';
	int r = n;
	int ans = 0;
	for(int l = 1; l <= n; l ++){
		if (l == r) {
			break;
		}
//cout << l << ' ' << r << '\n';	
		int g = len - a[l].r + 1;
		while (a[r].l >= g && l < r) {
			if (a[r].c != a[l].c) {
				ans += a[r].r - a[r].l + 1;
			}
			r --;
		}
//		cout << l << ' ' << r << '\n';
		//现在只有小于的
		if (l == r) break;
		if (a[r].c != a[l].c) {
			ans += a[r].r - g + 1;
		}
		a[r].r = g - 1;
	}
	cout << ans << '\n';
	return 0;
}