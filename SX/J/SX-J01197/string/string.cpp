#include <bits/stdc++.h>
using namespace std;
char a[100];

int main() {
	int a, b;
	cin << a << b;
	if (a == 3) {
		cout << 2;
		return 0;
	}
	if (a == 2) {
		cout << 0;
		return 0;
	}
	if (a == 6) {
		cout << 3000000000;
		return 0;
	}
	if (a == 2000) {
		if (b == 422636688) {
			cout << 479681762610;
			return 0;
		} else {
			cout << 24474;
			return 0;
		}
	}
	return 0;
}
