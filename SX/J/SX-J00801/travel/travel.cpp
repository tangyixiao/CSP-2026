#include <bits/stdc++.h>
using namespace std;
char c[4], k[4];
string n, m;
int a, b;
char cha, chb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= 3; i++) {
		cin >> c[i];
	}
	int t = c[1] - '0';
	int r = c[2] - '0';
	a = t * 10 + r;
	cha = c[3];
	cin >> m;
	for (int i = 1; i <= 3; i++) {
		cin >> k[i];
	}
	t = k[1] - '0';
	r = k[2] - '0';
	b = t * 10 + r;
	chb = k[3];
	if (n == m)
		cout << 1;
	else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}

	if (n == m && a == b)
		cout << 1;
	else
		cout << 0;
	if (a == b && ((cha >= 'A' && cha <= 'C' && chb >= 'A' && chb <= 'C') || ((cha == 'D' || cha == 'F') && (chb == 'D'
	               || chb == 'F'))))
		cout << 1;
	else
		cout << 0;
	if ((cha != 'D' && cha != 'C' && chb != 'D' && chb != 'C' && a == b && (cha - chb == 1 || chb - cha == 1)) || (a == b
	        && (cha == 'D' || cha == 'F') && (chb == 'D' || chb == 'F') ))
		cout << 1;
	else
		cout << 0;
	return 0;
}