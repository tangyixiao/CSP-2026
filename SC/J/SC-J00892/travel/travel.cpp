#include <bits/stdc++.h>

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string c1, s1, c2, s2;
	std::cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) {
		std::cout << "1";
	} else {
		std::cout << "0";
	}
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]) {
		std::cout << "1";
	} else {
		std::cout << "0";
	}
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && (std::max(s1[2], s2[2]) <= 'C' || std::min(s1[2], s2[2]) >= 'D')) {
		std::cout << "1";
	} else {
		std::cout << "0";
	}
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && ((std::max(s1[2], s2[2]) <= 'C' && std::max(s1[2], s2[2]) - 1 == std::min(s1[2], s2[2])) || std::min(s1[2], s2[2]) >= 'D')) {
		std::cout << "1";
	} else {
		std::cout << "0";
	}
	return 0;
}