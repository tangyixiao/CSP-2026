#include <bits/stdc++.h>
using namespace std;
bool A, B, C, D;

bool check_1(string c, string cc) {
	return c == cc;
}

bool check_2(string s, string ss) {
	string a = "";
	a = a + s[0] + s[1];
	string b = "";
	b = b + ss[0] + ss[1];
	return a == b;
}

bool check_3(string s, string ss) {
	char a;
	a = s[2];
	char b;
	b = ss[2];
	if (a >= 'A' && a <= 'C' && b >= 'A' && b <= 'C')
		return 1;
	if ((a == 'D' || a == 'F') && (b == 'D' || b == 'F'))
		return 1;
	return 0;
}

bool check_4(string s, string ss) {
	char a;
	a = s[2];
	char b;
	b = ss[2];
	if ((a == 'A' && b == 'C') || (a == 'C' && b == 'A'))
		return 0;
	return 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c, s, cc, ss;
	cin >> c >> s >> cc >> ss;
	A = check_1(c, cc);
	if (!A) {
		cout << "0000";
		return 0;
	}
	B = check_2(s, ss);
	if (!B) {
		cout << "1000";
		return 0;
	}
	C = check_3(s, ss);
	if (!C) {
		cout << "1100";
		return 0;
	}
	D = check_4(s, ss);
	if (!D) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}
