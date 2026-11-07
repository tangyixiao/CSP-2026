#include <iostream>
using ll = long long;
using namespace std;
string c1, s1, c2, s2;
bool is[5][5][2] = {
	{{0, 0}, {1, 1}, {1, 0}, {0, 0}, {0, 0}},
	{{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}},
	{{1, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}},
	{{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}},
	{{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}},
};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			char ch1 = s1[2], ch2 = s2[2];
			cout << is[ch1 - 'A'][ch2 - 'A'][0] << is[ch1-'A'][ch2-'A'][1] << "\n";
		} else {
			cout << "000\n";
		}
	} else {
		cout << "0000\n";
	}
	return 0;
}
