#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	int sum = 0, num = 0, fum = 0, gum = 0;
	cin >> a >> b >> c >> d;
	if ((a[1] == 1 || a[0] == 0) && (a[1] == 6 || a[0] == 0)) {
		cout << sum << num << fum << gum;
	} else {
		sum++;
	}
	if (b[0] == d[0] && b[1] == d[1]) {
		num++;

	} else {
		cout << sum << num << fum << gum;
		return 0;
	}

	if ((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')) {
		fum++;

	} else {
		if ((b[2] == 'A' || b[2] == 'C' || b[2] == 'B') && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C')) {
			fum++;
		} else {
			cout << sum << num << fum << gum;
			return 0;
		}

	}

	if ((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')) {
		gum++;
	} else {
		if ((b[2] == 'C' || b[2] == 'B') && (d[2] == 'C' || d[2] == 'B')) {
			gum++;
		} else if ((b[2] == 'A' || b[2] == 'B') && (d[2] == 'A' || d[2] == 'B')) {
			gum++;
		}
	}
	cout << sum << num << fum << gum;
	return 0;
}
