#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)

struct node {
	int num;
	char x;
} a[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	fr(i, 1, n) {
		cin >> a[i].num >> a[i].x;
	}
	int i = 1, j = n, ans = 0;
	while (1) {
//		cout << i << " " << j << " ";
		if (a[i].x != a[j].x) {
			ans += min(a[i].num, a[j].num);
//			cout << min(a[i].num, a[j].num) << "\n";
		}
		if (a[i].num > a[j].num) {
			a[i].num -= a[j].num;
			j--;
		} else {
			a[j].num -= a[i].num;
			i++;
		}
		if (i == j) {
			break;
		}
	}
	cout << ans;
	return 0;
}