#include <bits/stdc++.h>
using namespace std;
string s, a,  c ;
int x, y;
char b, d;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> x >> b >> c >> y >> d;
	if (a == c) {
		s += "1";
		if (x == y) {
			s += "1";
			if (b >= 'A' and b <= 'C' and d >= 'A' and d <= 'C' or b >= 'D' and b <= 'F' and d >= 'D' and d <= 'F') {
				s += "1";
				if (b > d) {
					swap(b, d);
				}
				if (b + 1 == d and b != 'C' or b == 'D' and d == 'F') {
					s += "1";
				}
			}
		}
	}
	while (s.size() < 4) {
		s += "0";
	}
	cout << s;


	return 0;
}
