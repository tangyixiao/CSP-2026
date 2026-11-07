#include <bits/stdc++.h>
using namespace std;
int n;

struct node {
	int a;
	char c;
} s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int zs = 0;
	for (int i = 0; i < n; i++) {
		cin >> s[i].a >> s[i].c;
		zs += s[i].a;
	}
	long long ans = 0;
	int i = 0, j = n - 1;
	int up1 = s[i].a, up2 = s[j].a;
	while (i < j) {

		if (s[i].c != s[j].c) {
			int cnt = min(up1, up2);
			ans += cnt;
			up1 -= cnt;
			up2 -= cnt;
		} else {
			int cnt = min(up1, up2);
			up1 -= cnt;
			up2 -= cnt;
		}
		if (up1 == 0) {
			i++;
			up1 = s[i].a;
		}
		if (up2 == 0) {
			j--;
			up2 = s[j].a;
		}
	}
	cout << ans;
	return 0;
}
