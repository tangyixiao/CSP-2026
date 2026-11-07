#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
const int maxn = 200005; 
int n, midi;
ull L = 0, mid, flag, ans = 0;
long long a[maxn];
char c[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	 
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L += (ull)a[i];
	}
	
	if (L % 2 == 0) {
		flag = 0;
	} else {
		flag = 1;
	}
	mid = L / 2;
	
	ull tmp = 0;
	for (int i = 1; i <= n; i++) {
		tmp += (ull)a[i];
		if (tmp > mid) {
			ull lft = mid - tmp + (ull)a[i], rgt = tmp - mid - flag;
			if (lft <= rgt) {
				a[i] = a[i] - flag - 2 * lft;
				midi = i - 1;
			}  else if (lft > rgt) {
				a[i] = a[i] - flag - 2 * rgt;
				midi = i;
			}
			break;
		} else if (tmp == mid) {
			midi = i;
			a[i + 1] -= flag;
			break;
		}
	}
	
	int i = 1, j = n;
	while (i <= midi) {
		if (a[i] < a[j]) {
			if (c[i] != c[j]) {
				ans += (ull)a[i];
			}
			a[j] -= a[i];
			i++;
		} else if (a[i] > a[j]) {
			if (c[i] != c[j]) {
				ans += (ull)a[j];
			}
			a[i] -= a[j];
			j--;
		} else {
			if (c[i] != c[j]) {
				ans += (ull)a[i];
			}
			i++;
			j--;
		}
	}
	
	cout << ans << endl; 
	return 0;
}
