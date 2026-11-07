#include <bits/stdc++.h>
using namespace std;
string str1, str2;

int main() {
	ios::sync_with_stdio();
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> str1 >> b >> str2;
	for (int i = 1; i <= 2; i++) {
		c = c * 10 + str1[i - 1] - '0';
		d = d * 10 + str2[i - 1] - '0';
	}
	if (a == b) {
		cout << "1";
		if (c == d) {
			cout << "1";
			if (str1[2] <= 'C' && str2[2] <= 'C' || str1[2] > 'C' && str2[2] > 'C') {
				cout << "1";
				if (abs(str1[2] - str2[2]) == 1)
					cout << "1";
				else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";

	return 0;
}
