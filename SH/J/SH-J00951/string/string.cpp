#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	deque <pair <long long, char> > dq;
	for (int i = 1; i <= n; i++) {
		long long x; char c;
		cin >> x >> c;
		dq.push_back({x, c});
	} long long sum = 0;
	while (dq.size() >= 2) {
		auto f = dq.front(), b = dq.back();
		dq.pop_front(); dq.pop_back();
		if (f.second != b.second) sum += min(b.first, f.first);
		if (f.first < b.first) dq.push_back({b.first - f.first, b.second});
		else if (f.first > b.first) dq.push_front({f.first - b.first, f.second});
	} cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

