#include <bits/stdc++.h>
using namespace std;

bool chexiang(string s1, string s2) {
	if (s1 == s2) {
		return 1;
	}
	return 0;
}

bool pai(string c1, string c2) {
	int num = 1;
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i >= 0; i--) {
		int x = (c1[i] - '0') * num;
		int x2 = (c2[i] - '0') * num;
		sum1 += x;
		sum2 += x2;
		num *= 10;

	}
	if (sum1 == sum2) {
		return 1;
	}
	return 0;
}

bool ce(string c1, string c2) {
	int len1 = c1.size();
	int len2 = c2.size();
	if (pai(c1, c2)) {
		if (c1[len1 - 1] >= 'A' && c1[len1 - 1] <= 'C') {
			if (c2[len2 - 1] >= 'A' && c2[len2 - 1] <= 'C') {
				return 1;
			}
		}
		if (c1[len1 - 1] >= 'D' && c1[len1 - 1] <= 'F') {
			if (c2[len2 - 1] >= 'D' && c2[len2 - 1] <= 'F') {
				return 1;
			}
		}
	}
	return 0;
}

bool xianglin( string c1, string c2) {
	int len1 = c1.size();
	int len2 = c2.size();

	if (c1[len1 - 1] == c2[len2 - 1] - 'A' + 1 + 'A' || c1[len1 - 1] == c2[len2 - 1] - 'A' - 1 + 'A') {
		return 1;
	}
	if (c1[len1 - 1] == 'D' && c2[len2 - 1] == 'F' || c1[len1 - 1] == 'F' && c2[len2 - 1] == 'D') {
		return 1;
	}
	return 0;
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1, c1, s2, c2;
	cin >> s1 >> c1 >> s2 >> c2;
	if (c1 == c2) {
		cout << "0000";
		return 0;
	}


	if (chexiang(s1, s2)) {
		cout << "1";
		if (pai(c1, c2)) {
			cout << "1";
			if (ce(c1, c2)) {
				cout << "1";
				if (xianglin(c1, c2)) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
