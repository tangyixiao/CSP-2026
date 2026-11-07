#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
int z1, z2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;

	if (c1 == c2) {
		z1 = 1;
		z2 = 1;
	} else {
		z1 = 0;
		z2 = 0;
	}
	cout << z1 << "1" << z2 << "0";
	return 0;
}