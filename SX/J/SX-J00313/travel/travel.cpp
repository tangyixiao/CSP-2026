#include <bits/stdc++.h>
using namespace std;
string a1, b1, a2, b2;
bool flag = 0;

bool check(string x1, string x2) { //ÊÇ·ñÍ¬Ò»ÅÅ
	char m = x1[2], n = x2[2];
	if ((m == 'C' && n == 'D') || (m == 'D' && n == 'C'))
		return false;
	if (m == n + 1 || m == n - 1)
		return true;
	if ((m == 'C' && n == 'A') || (m == 'A' && n == 'C'))
		return true;
	return false;
}

bool check2(string x1, string x2) {
	char m = x1[2], n = x2[2];
	if ((m == 'C' && n == 'D') || (m == 'D' && n == 'C'))
		return false;
	if (m == n + 1 || m == n - 1)
		return true;
	if ((m == 'C' && n == 'A') || (m == 'A' && n == 'C'))
		return false;
	return false;
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2) {
		cout << 1;
		if (b1[0] == b2[0] && b1[1] == b2[1]) {
			cout << 1;
			if (check(b1, b2)) {
				cout << 1;
				if (check2(b1, b2)) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
				cout << 0;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}

	return 0;
}