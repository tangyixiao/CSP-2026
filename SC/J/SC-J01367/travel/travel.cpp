#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5, MN = INT_MIN, MX = INT_MAX;
string a, b, c, d;
bool ck(int s1, int s2) {
	if (abs(s1 - s2) == 1) {
		if (b[2] == d[2])
			return 1;
		else
			return 0;
	}
	if (s1 == s2) {
		if (b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') {
			if (abs(b[2] - d[2]) == 1)
				return 1;
			else
				return 0;
		} else if (b[2] >= 'D' && b[2] <= 'F' && d[2] >= 'D' && d[2] <= 'F') {
			if (abs(b[2] - d[2]) == 2)
				return 1;
			else
				return 0;
		} else
			return 0;
	}
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a != c) {
		cout << "0000";
		return 0;
	} else
		cout << 1;
	if (b[0] == d[0] && b[1] == d[1])
		cout << 1;
	else
		cout << 0;
	if (b[0] == d[0] && b[1] == d[1] && ((b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') || (b[2] >= 'D' && b[2] <= 'F' && d[2] >= 'D' && d[2] <= 'F')))
		cout << 1;
	else
		cout << 0;
	int s1 = b[0] * 10 + b[1];
	int s2 = d[0] * 10 + d[1];
	if (ck(s1, s2))
		cout << 1;
	else
		cout << 0;
	return 0;
}