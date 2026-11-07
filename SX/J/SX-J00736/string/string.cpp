#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long sum = 0, n;
	cin >> n;
	string sa, sb;
	for (int i = 1; i <= n; i++) {
		int m;
		char f;
		cin >> m >> f;
		sa.insert(sa.begin() + sa.size(), m, f);
		sb.insert(sb.begin() + 0, m, f);
	}
	for (int i = 0; i * 1ull < sa.size(); i++) {
		if (sa[i] != sb[i])
			sum++;
	}
	cout << sum / 2;
	return 0;
}
