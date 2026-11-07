#include <bits/stdc++.h>
#define p_q priority_queue
#define int long long
#define endl "\n"
using namespace std;

struct node {
	int x;
	char y;
} num[200005];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	string s = "";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i].x >> num[i].y;
	}
	int p1 = 1, p2 = n, cnt1 = 0, cnt2 = 0, ans = 0;
	while (p1 <= p2) {
		if (num[p1].y == num[p2].y) {
			if (num[p1].x > num[p2].x) {
				num[p1].x = num[p1].x - num[p2].x;
				cnt2 += num[p2].x;
				p2--;
			} else if (num[p1].x < num[p2].x) {
				num[p2].x = num[p2].x - num[p1].x;
				cnt1 += num[p1].x;
				p1++;
			} else
				cnt1 += num[p1].x, p1++, cnt2 += num[p2].x, p2--;
		} else {
			if (num[p1].x > num[p2].x) {
				num[p1].x = num[p1].x - num[p2].x;
				ans += num[p2].x;
				cnt2 += num[p2].x;
				p2--;
			} else if (num[p1].x < num[p2].x) {
				num[p2].x = num[p2].x - num[p1].x;
				ans += num[p1].x;
				cnt1 += num[p1].x;
				p1++;
			} else
				ans += num[p1].x, cnt1 += num[p1].x, cnt2 += num[p2].x, p1++, p2--;
		}
	}
	cout << ans;
	return 0;
}
