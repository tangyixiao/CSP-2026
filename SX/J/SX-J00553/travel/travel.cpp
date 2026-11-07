#include <bits/stdc++.h>
using namespace std;
int c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int a[] = {s1}, b[] = {s2};
	int ans[] = {0000};
	if (c1 == c2) {
		ans[1] = 1;
	} else {
		ans[1] = 0;
	}
	if (a[1] == b[1]) {
		ans[2] = 1;
	} else {
		ans[2] = 0;
	}
	if (a[2] == b[2]) {
		ans[3] = 1;
	} else {
		ans[3] = 0;
	}
	if (a[3] - b[3] == 1 || b[3] - a[3] == 1) {
		ans[4] = 1;
	} else {
		ans[4] = 0;
	}
	cout << ans;
	return 0;

}
