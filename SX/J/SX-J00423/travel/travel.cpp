//为什么不教我字符串啊
#include <bits/stdc++.h>
using namespace std;
bool c_1, c_3, c_2, c_4;
string c, c1;
int a, a1, b, b1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	if (a == a1) {
		c_1 = 1;
	}
	if (b == b1 && c_1 == 1) {
		c_2 = 1;
	}
	if (c_2 == 1 ) {
		c_3 = 1;
	}
	if (c_3 == 1 ) {
		c_4 = 1;
	}
	cout << c_1 << c_2 << c_3 << c_4;
	return 0;
}

