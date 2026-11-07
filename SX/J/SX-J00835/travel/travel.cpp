#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char a, b;
	int a1, b1;
	cin >> a >> a1 >> b >> b1;
	if (a == b)
		cout << "1";
	else
		cout << "0";
	if (a1 == b1)
		cout << "1" << "1";
	else
		cout << "0" << "0";
	cout << "0";
	return 0;
}
