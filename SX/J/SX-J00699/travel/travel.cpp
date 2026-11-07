#include <bits/stdc++.h>
using namespace std;
int a, a1;
string b, b1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> a1 >> b1;
	if (a == a1) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	string s;
	string s1;
	int n = (b[0] - '0') * 10 + (b[1] - '0');
	int m = (b1[0] - '0') * 10 + (b1[1] - '0') ;
	char c = b[2];
	char c1 = b1[2];
	if (n == m) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if ((c >= 'D' && c <= 'F' && c1 >= 'D' && c1 <= 'F') || (c >= 'A' && c <= 'C' && c1 >= 'A' && c1 <= 'C')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if ((c == 'D' && c1 == 'F') || (c == 'F' && c1 == 'D') || (c == 'A' && c1 == 'B') || (c == 'B' && c1 == 'A' ) || (a == 'B' && a1 == 'C') || (a == 'C' && a1 == 'B')) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
