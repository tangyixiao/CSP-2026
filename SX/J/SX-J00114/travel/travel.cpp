#include <iostream>
using namespace std;
int c1, c2, s1, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		num1 = 1;
	} else {
		num1 = 0;
	}
	if (c2 == s2) {
		num2 = 1;
		num3 = 1;
	} else {
		num2 = 0;
		num3 = 0;
	}
	if (c2 > s2) {
		num4 = 0;
	} else {
		num4 = 1;
	}
	cout << num1 << num2 << num3 << num4;
	return 0;
}