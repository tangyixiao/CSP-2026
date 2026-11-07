#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int ans(string b, string d) {

	if (((b[2] >= 'A' && b[2] <= 'C') && (d[2] >= 'A' && d[2] <= 'C')) || ((b[2] >= 'D' && b[2] <= 'F') && (d[2] >= 'D'
	        && d[2] <= 'F')))
		return 1;
	else
		return 0;
}

int ans1(string a, string c) {

	if (a[0] == c[0] && a[1] == c[1])
		return 1;
	else
		return 0;
}

int ans2(string a, string b, string c, string d) {

	if (ans1(a, c) == 1 && b[0] == d[0] && b[1] == d[1])
		return 1;
	else
		return 0;
}

int ans3(string a, string b, string c, string d) {

	if (ans2(a, b, c, d) == 1 && b[0] == d[0] && b[1] == d[1] && ans(b, d) == 1)
		return 1;
	else
		return 0;
}

int ans4(string a, string b, string c, string d) {

	if (((b[2] - 1 == d[2] || b[2] + 1 == d[2]) || (( b[2] == 'D' && d[2] == 'F') || (b[2] == 'F' && d[2] == 'D')))
	        && (ans3(a, b, c, d) == 1))
		return 1;
	else
		return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	cout << ans1(a, c) << ans2(a, b, c, d) << ans3(a, b, c, d) << ans4(a, b, c, d);
	return 0;
}
