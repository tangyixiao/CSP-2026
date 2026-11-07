#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (s2[1] == s4[1])
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if (s2[2] == 'A' or s2[2] == 'B' or s2[2] == 'C') {
		if (s4[2] == 'A' or s4[2] == 'B' or s4[2] == 'C')
			cout << "1";
		else {
			cout << "00";
			return 0;
		}
	} else if (s2[2] == 'D' or s2[2] == 'F') {
		if (s4[2] == 'D' or s4[2] == 'F')
			cout << "1";
		else {
			cout << "00";
			return 0;
		}
	}
	if (s2[2] == 'A' and s4[2] == 'B' or s2[2] == 'B' and s4[2] == 'A')
		cout << "1";
	else if (s2[2] == 'B' and s4[2] == 'C' or s2[2] == 'C' and s4[2] == 'B')
		cout << "1";
	else if (s2[2] == 'C' and s4[2] == 'D' or s2[2] == 'D' and s4[2] == 'C')
		cout << "1";
	else if (s2[2] == 'D' and s4[2] == 'F' or s2[2] == 'F' and s4[2] == 'D')
		cout << "1";
	else
		cout << "0";

	return 0;
}
