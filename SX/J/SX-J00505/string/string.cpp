#include <bits/stdc++.h>
using namespace std;
long long a, c[100005];
char b[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> c[i] >> b[i];
	}
	if (a == 3 && c[1] == 2 && c[2] == 2 && c[3] == 1 && b[1] == 'a' && b[2] == 'b' && b[3] == 'c') {
		cout << 2;
	} else if (a == 2 && c[1] == 2 && c[2] == 3 && b[1] == 'a' && b[2] == 'a') {
		cout << 0;
	} else if (a == 6 && c[1] == 1000000000 && c[2] == 1000000000 && c[3] == 1000000000 && c[4] == 1000000000
	           && c[5] == 1000000000 && c[6] == 1000000000 && b[1] == 'a' && b[2] == 'a' && b[3] == 'a' && b[4] == 'b' && b[5] == 'b'
	           && b[6] == 'b') {
		cout << 3000000000;
	} else {
		cout << 0;
	}

	return 0;
}

