#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

string s1, s2, s3, s4;

bool shang(const string &s) {
	return s[2] == 'F' || s[2] == 'D';
}

bool lin(const string &s, const string &t) {
	int a = 10 * (s[0] - '0') + s[1] - '0';
	int b = 10 * (t[0] - '0') + t[1] - '0';
	int c = s[2] - 'A' + 1;
	int d = t[2] - 'A' + 1;

//	cout << "a = " << a << endl
//	     << "b = " << b << endl
//	     << "c = " << c << endl
//	     << "d = " << d << endl;

	if ((a == b && abs(c - d) == 1)
	        || (c == d && abs(a - b) == 1))
		return true;
	else
		return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin.tie(0)->sync_with_stdio(0);

	cin >> s1 >> s2 >> s3 >> s4;

	if (s1 == s3)
		cout << 1;
	else
		cout << 0;

	if (s1 == s3 && s2[0] == s4[0] && s2[1] == s4[1])
		cout << 1;
	else
		cout << 0;

	if (s1 == s3 && s2[0] == s4[0] && s2[1] == s4[1] && shang(s2) == shang(s4))
		cout << 1;
	else
		cout << 0;

	if (s1 == s3 && s2[0] == s4[0] && s2[1] == s4[1] && shang(s2) == shang(s4) && lin(s2, s4))
		cout << 1;
	else
		cout << 0;

	cout << endl;
}
