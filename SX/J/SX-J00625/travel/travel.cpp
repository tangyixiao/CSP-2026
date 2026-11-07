#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	char R = s1[2], X = s2[2];
	int a = s1[1] - 48, b = s2[1] - 48;
	if (a != b) {
		cout << "000";
		return 0;
	}
	cout << 1;
	if ((X == 'A' || X == 'B' || X == 'C') && (R == 'D' || R == 'F')) {
		cout << "00";
		return 0;
	}
	if ((R == 'A' || R == 'B' || R == 'C') && (X == 'D' || X == 'F')) {
		cout << "00";
		return 0;
	}
	cout << 1;
	if ((X - R == 1 || R - X == 1)) {
		cout << 1;
		return 0;
	}
	cout << 0;
	return 0;
}
