#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a = 0, b = 0;
	string s, s1, s2, s3;
	cin >> s >> s1 >> s2 >> s3;
	if (s == s2) {
		cout << "1";
		for (int i = 0; i < 2; i++) {
			a += s1[i];
			b += s3[i];
		}
		if (a == b) {
			cout << "1";
			if (((s1[2] >= 65 && s1[2] <= 67) && (s3[2] >= 65 && s3[2] <= 67)) || ((s1[2] >= 68 && s1[2] <= 69) && (s3[2] >= 68
			        && s3[2] <= 69))) {
				cout << "1";
				if ((s1[2] >= 68 && s1[2] <= 69) && (s3[2] >= 68 && s3[2] <= 69))
					cout << "1" << endl;
				else if (s1[2] - s3[2] == 1 || s3[2] - s1[2] == 1)
					cout << "1" << endl;
				else
					cout << "0" << endl;
			} else
				cout << "00" << endl;
		} else
			cout << "000" << endl;
	} else
		cout << "0000" << endl;
	return 0;
}
