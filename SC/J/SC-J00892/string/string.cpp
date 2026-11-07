#include <bits/stdc++.h>

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::deque <std::pair <long long, char>> v;
	for(int i = 1; i <= n; i++) {
		long long a;
		std::cin >> a;
		char c;
		std::cin >> c;
		v.push_back({a, c});
	}
	long long ans = 0;
	while(!v.empty()) {
		long long s1 = v.front().first;
		char c1 = v.front().second;
		long long s2 = v.back().first;
		char c2 = v.back().second;
		if(c1 != c2) {
			ans += std::min(s1, s2);
		}
		if(s1 == s2) {
			if(!v.empty()) { v.pop_back(); }
			if(!v.empty()) { v.pop_front(); }
		} else {
			if(s1 < s2) {
				if(!v.empty()) { v.pop_front(); }
				if(!v.empty()) { v.back().first -= s1; }
			} else {
				if(!v.empty()) { v.pop_back(); }
				if(!v.empty()) { v.front().first -= s2; }
			}
		}
	}
	std::cout << ans;
	return 0;
}