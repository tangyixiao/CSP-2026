#include <bits/stdc++.h>

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n;
	std::cin >> n;

	std::vector<long long> a;
	std::vector<char> c;

	for (int i = 1; i <= n; i++) {
		long long ai;
		char ci;
		std::cin >> ai >> ci;
		if (i > 1 && ci == c[c.size() - 1])
			a[a.size() - 1] += ai;
		else
			c.push_back(ci), a.push_back(ai);
	}

	unsigned long long ans = 0;
	for (int i = 0, j = a.size() - 1; i < j; ) {
		if (a[i] == a[j]) {
			if (c[i] == c[j]) {
				i++, j--;
				continue;
			}
			ans += a[i];
			i++, j--;
		} else if (a[i] < a[j]) {
			if (c[i] == c[j]) {
				a[j] -= a[i];
				i++;
				continue;
			}
			a[j] -= a[i];
			ans += a[i];
			i++;
		} else {
			if (c[i] == c[j]) {
				a[i] -= a[j];
				j--;
				continue;
			}
			a[i] -= a[j];
			ans += a[j];
			j--;
		}
	}

	std::cout << ans;
	return 0;
}
