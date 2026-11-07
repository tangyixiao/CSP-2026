#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		string num1;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] >= 'A' && s1[i] <= 'Z') {
				continue;
			}
			num1 += s1[i];
		}
		string num2;
		for (int i = 0; i < s2.length(); i++) {
			if (s2[i] >= 'A' && s2[i] <= 'Z') {
				continue;
			}
			num2 += s2[i];
		}
		if (num1 != num2) {
			cout << "1000";
		} else {
			if (s1 != s2) {
				cout << "1100";
				return 0;
			} else {
				string num3;
				for (int i = 0; i < s1.length(); i++) {
					if (s1[i] >= 'A' && s1[i] <= 'Z') {
						num3 += s1[i];
					}
				}
				string num4;
				for (int i = 0; i < s2.length(); i++) {
					if (s2[i] >= 'A' && s2[i] <= 'Z') {
						num4 += s2[i];
					}
				}
				if (num3 + 'A' != num4 || num4 + 'A' != num3) {
					cout << "1110";
					return 0;
				}
			}
		}
	}

	return 0;
}
