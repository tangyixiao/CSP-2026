#include <bits/stdc++.h>
using namespace std;
string s, s_z, c, c_z;
int b = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> c_z >> s_z;
	if (c == c_z)
		cout << 1;
	else {
		cout << 0;
		b = 1;
	}
	if (b)
		cout << 0;
	else if (s[0] == s_z[0] && s[1] == s_z[1])
		cout << 1;
	else {
		cout << 0;
		b = 1;
	}
	if (b)
		cout << 0;
	else if (s[2] <= 'C' && s[2] >= 'A' && s_z[2] <= 'C' && s_z[2] >= 'A')
		cout << 1;
	else if (s[2] <= 'F' && s[2] >= 'D' && s_z[2] <= 'F' && s_z[2] >= 'D')
		cout << 1;
	else {
		cout << 0;
		b = 1;
	}
	if (b)
		cout << 0;
	else if (s[2] + 1 == s_z[2] + 0 || s[2] - 1 == s_z[2] + 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}
