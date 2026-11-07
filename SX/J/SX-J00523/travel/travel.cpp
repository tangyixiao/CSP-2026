#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	long long n, m;
	string n2, m2;
	cin >> n >> n2 >> m >> m2;
	if (n == m) {
		cout << 1;
		if (n2[1] == m2[1])
			cout << 1;
		else {
			cout << "000";
			return 0;
		}
		if (int(n2[2]) <= 67 && int(m2[2]) <= 67) {
			cout << 1;
		} else if (int(n2[2]) > 67 && int(m2[2]) > 67) {
			cout << 1;
		} else
			cout << 0;
		if (abs(int(n2[2]) - int(m2[2])) == 1 && max(int(n2[2]), int(m2[2])) != 68)
			cout << 1;
		else if (max(int(n2[2]), int(m2[2])) == 70 && min(int(n2[2]), int(m2[2])) == 68)
			cout << 1;
		else
			cout << 0;
	} else
		cout << "0000";
	return 0;
}
