#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;

struct node {
	int num;
	char zm;
};
deque <node> q;
int n;
int ans;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char c;
		cin >> x >> c;
		q.push_back({x, c});
	}
	while (q.size()) {
		if (q.size() == 1)
			break;

		int num1 = q.front().num;
		int num2 = q.back().num;
		char a = q.front().zm;
		char b = q.back().zm;
		q.pop_front();
		q.pop_back();
		int js = min(num1, num2);
		if (a == b) {
			num1 -= js;
			num2 -= js;
			if (num1 > 0) {
				q.push_front({num1, a});
			}
			if (num2 > 0) {
				q.push_back({num2, b});
			}
		} else {
			ans += js;
			num1 -= js;
			num2 -= js;
			if (num1 > 0) {
				q.push_front({num1, a});
			}
			if (num2 > 0) {
				q.push_back({num2, b});
			}
		}

	}
	cout << ans;
	return 0;
}
