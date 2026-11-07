#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	cout << (c1 == c2);
	char l1[5] = {};
	char l2[5] = {};
	for (int i = 0; i <= 2; i++) {
		l1[i] = s1[i];
		l2[i] = s2[i];
	}
	cout << (c1 == c2&&l1[0] == l2[0] && l1[1] == l2[1]);
	char seat[3] = {'A', 'B', 'C'};
	bool seat1 = 0;
	bool seat2 = 0;
	for (int i = 0; i <= 2; i++) {
		if (l1[2] == seat[i]) {
			seat1 = 1;
		}
		if (l2[2] == seat[i]) {
			seat2 = 1;
		}
	}
	bool b1 = (((seat1&&seat2) || (!seat1&&!seat2)) && ((l1[2] + 1 == l2[2] + 0) || (l1[2] - 1 == l2[2] + 0)));
	cout << (c1 == c2)&&((seat1&&seat2) || (!seat1&&!seat2));
	bool b2 = (c1 == c2) && b1;
	cout << b2;
	return 0;
}
