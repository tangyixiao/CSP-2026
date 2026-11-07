#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
		cout << "0000";
	else {
		cout << '1';
		int a = (s1[0] - '0') * 10 + s1[1] - '0';
		int b = (s2[0] - '0') * 10 + s2[1] - '0';
		if (a != b)
			cout << "000";
		else {
			cout << '1';
			a = (s1[2] != 'F' ? s1[2] - 'A' : 4);
			b = (s2[2] != 'F' ? s2[2] - 'A' : 4);
			if (a > b)
				swap(a, b);
			if (a <= 2 && b >= 3)
				cout << "00";
			else {
				cout << '1';
				if (b - a > 1)
					cout << '0';
				else
					cout << '1';
			}
		}
	}
	return 0;
}
