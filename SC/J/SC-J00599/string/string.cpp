#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+10;
struct str {
	int num;
	char ch;
};
str a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i].num >> a[i].ch;
	}
	
	int l = 1, r = n;
	long long ans = 0;
	while (l < r) {
		if (a[l].ch != a[r].ch) {
			
			if (a[l].num > a[r].num) {
				ans += a[r].num;
				a[l].num -= a[r].num;
				a[r].num = 0;
			} else {
				ans += a[l].num;
				a[r].num -= a[l].num;
				a[l].num = 0;
			}
			
		} else {
			if (a[l].num > a[r].num) {
				a[l].num -= a[r].num;
				a[r].num = 0;
			} else {
				a[r].num -= a[l].num;
				a[l].num = 0;
			}
		}
		
		if (a[l].num == 0) ++l;
		if (a[r].num == 0) --r;
		
	}
	
	cout << ans << endl;
	
	return 0;
}
