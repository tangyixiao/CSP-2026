#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2; //c1,s1是1的,c2,s2是2的

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if (s1.substr(0, 2) == s2.substr(0, 2))
		cout << 1;
	else {
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	char a = s1[2], b = s2[2];
	if ((a == 'A' && b == 'B') || (a == 'A' && b == 'C') || (b == 'A' && a == 'B') || (b == 'A' && a == 'C') || (a == 'D'
	        && b == 'F') || (a == 'F' && b == 'D'))
		cout << 1;
	else {
		cout << 0;
		cout << 0;
		return 0;
	}
	if ((a == 'A' && b == 'B') || (b == 'A' && a == 'B' ) || ( a == 'D' && b == 'F' ) || ( a == 'F' && b == 'D'))
		cout << 1;
	else
		cout << 0;
	return 0;
}
