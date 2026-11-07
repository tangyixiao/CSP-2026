#include <bits/stdc++.h>
using namespace std;
int n, m;
string s1, s2;

bool check(char a, char b) {
	if ((a == 'F' && b == 'D' ) || (a == 'A' && b == 'B') || (a == 'B' && b == 'C') || (b == 'F' && a == 'D') || (b == 'A'
	        && a == 'B' ) || (b == 'B' && a == 'C'))
		return true;
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> s1 >> m >> s2;
	if (n != m) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	if (!(s1[0] == s2[0] && s1[1] == s2[1])) {
		cout << "000";
		return 0;
	}
	cout << 1;
	char a = s1[2], b = s2[2];
	if (check(a, b)) {
		cout << "11";
		return 0;
	}
	if ((a == 'A' && b == 'C') || (b == 'A' && a == 'C')) {
		cout << "10";
		return 0;
	}
	cout << "00";
	return 0;
}
