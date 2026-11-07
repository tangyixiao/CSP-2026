#include <bits/stdc++.h>
using namespace std;
char r[10], x[10];
int a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= 3; i++)
		cin >> r[i];
	cin >> b;
	for (int j = 1; j <= 3; j++)
		cin >> x[j];

	if (a == b)
		cout << 1;
	else
		cout << 0;

	if (r[1] == x[1] && r[2] == x[2])
		cout << 1;
	else
		cout << 0;

	if (r[3] <= 67 && x[3] <= 67) {
		cout << 1;
		if (r[3] == x[3] - 1 || r[3] == x[3] + 1) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else if (r[3] >= 68 && x[3] >= 68) {
		cout << 1;
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
	}
	//111
	return 0;
}
