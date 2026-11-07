#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, a, b;
	char a1, a2;
	cin >> n >> a >> a1;
	if (n == 1) {
		cout << 0;
	}
	if (n == 2) {
		cin >> b >> a2;
		if (a1 == a2) {
			cout << 0;
		} else {
			if (a > b) {
				cout << b;
			} else {
				cout << a;
			}
		}

	}
	return 0;
}
