#include <iostream>
using namespace std;

int main() {
	feopen("travel.in", "r", stdin);
	feopen("travel.out", "w", stdout);
	int c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c2 == c1) {
		cout << 0;
	} else {
		cout << 1;
	}
	cout << 1;
	cout << 1;
	cout << 0;
	return 0;
}
