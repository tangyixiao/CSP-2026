#include <bits/stdc++.h>
using namespace std;

string c1[2], s1[4], c2[2], s2[4];
string a[5];

int main() {
	freopen("travel.in", "w", stdin);
	freopen("travel.out", "r", stdout);
	for (int i = 0; i <= 1; i++) {
		cin >> c1[i];
	}
	for (int i = 0; i <= 3; i++) {
		cin >> s1[i];
	}
	for (int i = 0; i <= 1; i++) {
		cin >> c2[i];
	}
	for (int i = 0; i <= 3; i++) {
		cin >> s2[i];
	}

	if (c1[0] == c2[0] && c1[1] == c2[1])
		a[0] = 1;


	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		a[1] = 1;
	}

	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		a[2] = 1;
	}

	cout << a;
	return 0;
}
