#include<bits/stdc++.h>
using namespace std;

int n;
long long ans;
deque<pair<long long, char>>f;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long a;
	char ch;
	for (int i = 1; i <= n; ++i) cin >> a >> ch, f.push_back({a, ch});
	while (!f.empty() && f.size() != 1) {
//		cout << f.size() << ": " << f.front().first << " " << f.front().second << "   " << f.back().first << " " << f.back().second << "      " << ans << endl;
		if (f.front().first > f.back().first) {
			pair<int, char>top = f.front();
			if (f.front().second != f.back().second) ans += f.back().first;
			f.pop_front();
			f.push_front({top.first - f.back().first, top.second});
			f.pop_back();
		} else if (f.front().first < f.back().first) {
			pair<int, char>ed = f.back();
			if (f.front().second != f.back().second) ans += f.front().first;
			f.pop_back();
			f.push_back({ed.first - f.front().first, ed.second});
			f.pop_front();
		} else {
			if (f.front().second != f.back().second) ans += f.back().first;
			f.pop_front(), f.pop_back();
		}
	}

	cout << ans << "\n";

	return 0;
}