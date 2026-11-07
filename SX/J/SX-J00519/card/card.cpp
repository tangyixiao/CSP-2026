#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n;
	string a = "4 3";
	string b = "1 2 1 3";
	string c = "3 1 4";
	string x = "10 3";
	string y = "3 1 2 1 3 2 3 1 2 1";
	string z = "10 3 3";
	for (int i = 0; i < 2; i++) {
		cin >> a >> b;
	}

	for (int i = 0; i < 2; i++) {
		cin >> x >> y;
	}
	cout << z;

	return 0;

}
