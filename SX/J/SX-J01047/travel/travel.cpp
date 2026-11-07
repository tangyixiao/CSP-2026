#include <bits/stdc++.h>
using namespace std;
int n, m;
string s1, s2;
char x, y;

//十年OI一场空 不开longlong见 祖宗
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> n >> s1 >> m >> s2;
	int a = (s1[0] - '0') * 10 + s1[1] - '0';
	int b = (s2[0] - '0') * 10 + s2[1] - '0';
	x = s1[2], y = s2[2];
//	cerr << n << " " << m << " " << a << " " << b << " " << x << " " << y << endl;
	if (n == m) {
		cout << '1';
		if (a == b) {
			cout << '1';
			if ((x >= 'A' && x <= 'C' && y >= 'A' && y <= 'C') ||
			        (x >= 'D' && x <= 'F' && y >= 'D' && y <= 'F')) {
				cout << '1';
				if ((x == 'A' && y == 'B') || (x == 'B' && y == 'A')
				        || (x == 'B' && y == 'C') || (x == 'C' && y == 'B')
				        || (x == 'D' && y == 'F') || (x == 'F' && y == 'D') ) {
					cout << '1';
				}	else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}

	return 0;
}
