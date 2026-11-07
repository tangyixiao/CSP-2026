#include <bits/stdc++.h>
using namespace std;
 
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a1, a2, b1, b2;
	bool flag = 1;
	cin >> a1 >> a2 >> b1 >> b2;
	for (int i = 0; i < 2; i++) {
		if (a1[i] != b1[i])
			flag = 0;
	}
	if (flag)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	flag = 1;
	for (int i = 0; i < 2; i++) {
		if (a2[i] != b2[i])
			flag = 0;
	}
	if (flag)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (a2[2] - 'A' > 2 && b2[2] - 'A' > 2)
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (abs(a2[2] - b2[2]))
		cout << 1;
	else
		cout << 0;
	return 0;
}
