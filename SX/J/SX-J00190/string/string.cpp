#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll al, ans, x;
int n;

struct hfk {
	ll num;
	char wor;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a[++al].num >> a[al].wor;
		if (a[al].wor == a[al - 1].wor) {
			a[al - 1].num += a[al].num;
			a[al].num = 0;
			al--;
		}
	}
	if (al == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1, j = al; i <= (al + 1) / 2, j >= (al + 1) / 2; i++, j--) {
		if (i == j) {
			cout << ans;
			return 0;
		}
		if (a[i].wor == a[j].wor) {
			if (a[i].num >= a[j].num) {
				a[i].num -= a[j].num;
				a[j].num = 0;
				i--;
			} else {
				a[j].num -= a[i].num;
				a[i].num = 0;
				j++;
				continue;
			}
		}
		if (a[i].wor != a[j].wor) {
			ans += min(a[i].num, a[j].num);
			if (a[i].num >= a[j].num) {
				a[i].num -= a[j].num;
				a[j].num = 0;
				i--;
			} else {
				a[j].num -= a[i].num;
				a[i].num = 0;
				j++;
			}
		}
	}
	cout << ans;
	return 0;
}
// 0 0
// 91 a <-i
// 78 b
// 13 a <-j
// 0 0
//ans=