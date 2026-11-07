#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 0;
string c1, s1, c2, s2;

inline ll read();

bool ans1() {
	return c1 == c2;
}

bool ans2() {
	return ans1() && (s1.substr(0, 2) == s2.substr(0, 2));
}

bool ans3_1() {
	return (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C');
}

bool ans3_2() {
	return (s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F');
}

bool ans3() {
	return ans2() && (ans3_1() || ans3_2());
}

bool ans4() {
	return ans3() && (s1[2] == 'B' || s1[2] == 'D' || s1[2] == 'F' || s2[2] == 'B' || s2[2] == 'D' || s2[2] == 'F');
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	printf("%d%d%d%d", ans1(), ans2(), ans3(), ans4());
	return 0;
}
