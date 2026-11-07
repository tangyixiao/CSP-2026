#include <bits/stdc++.h>
using namespace std;
int x, y, z, h;
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0 ;
a = y / 100;
b = y % 10;
c = y / 10 % 10;
d = h / 100;
e = h / 10 % 10;
f = h % 10;

int main() {
	cin >> x >> y >> z >> h >> a >> b >> c >> d >> e >> f;
	if (x == z) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ( a == f) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
