#include <iostream>
using namespace std;

string c1, s1, c2, s2;

bool solve1() {
	return c1 == c2;
}

bool solve2() {
	if (solve1()) {
		return s1[0] == s2[0] && s1[1] == s2[1];
	}
	return 0;
}

bool solve3() {
	if (solve2()) {
		return (s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'B' && s2[2] == 'C') ||
		       (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'B') ||
		       (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D');
	}
	return 0;
}

bool solve4() {
	if (solve2()) {
		return (s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') ||
		       (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'B') ||
		       (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D');
	}
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	cout << solve1() << solve2() << solve3() << solve4();

}