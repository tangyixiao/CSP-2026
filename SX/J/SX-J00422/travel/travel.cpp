#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1, s1, c2, s2;
	int a;
	cin >> c1 >> s1 >> c2 >> s2;
	if (!(c1 == c2) || (s1 == s2))
		return 0;
	if (c1 == c2) {
		a = 1;
	} else
		a = 0;
	if (s1 == s2 && c1 == c2) {
		a = 1111;
	}


	cout << a;
	return 0;
}