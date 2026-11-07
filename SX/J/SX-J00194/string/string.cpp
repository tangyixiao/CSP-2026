#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 2e5;

struct str {
	int a;
	char c;
};
str s[N];
long long l, r, ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	deque<pair<int, char>> q;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
		q.push_back({s[i].a, s[i].c});
	}
	while (q.size() > 1) {
		if (q.size() >= 2) {
			pair<int, char> aa = q.front(), bb = q.back();
			if (aa.second != bb.second) {
				ans += min(aa.first, bb.first);
			}
			if (aa.first > bb.first) {
				q.pop_front();
				q.pop_back();
				q.push_front({aa.first - bb.first, aa.second});
			} else if (aa.first == bb.first) {
				q.pop_front();
				q.pop_back();
			} else {
				q.pop_front();
				q.pop_back();
				q.push_back({bb.first - aa.first, bb.second});
			}
		}
	}
	cout << ans ;
	return 0;
}
