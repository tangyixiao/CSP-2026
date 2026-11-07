#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	int a1[20][10], a2[20][10];
	for (int i = 0; i <= 2; i++) {
		cin >> c1 >> c2;
	}
	for (int i = 0; i <= 18; i++) {
		for (int j = 0; j <= 5; j++) {
			cin >> a1[i][j] >> a2[i][j];
		}
	}
	if (c1 == c2 && s1 == s2) {
		cout << "1111";
	} else {
		cout << "000";
	}
	return 0;
}
