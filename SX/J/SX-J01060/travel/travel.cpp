#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
bool flag[10];

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	for (int i = 0; i < 10; i++)
		flag[i] = false;
	if (s1 == s3) {
		flag[0] = true;
		if (s2[0] == s4[0] && s2[1] == s4[1]) {
			flag[1] = true;
			if (s2[2] < 'D' && s4[2] < 'D') {
				flag[2] = true;
				if (s2[2] == s4[2] + 1 || s2[2]  == s4[2] - 1)
					flag[3] = true;
				else
					flag[3] = false;
			} else if (s2[2] > 'C' && s4[2] > 'C') {
				flag[2] = true;
				if (s2[2]  == s4[2] + 2 || s2[2]  == s4[2] - 2)
					flag[3] = true;
				else
					flag[3] = false;
			} else {
				flag[2] = false;
				flag[3] = false;
			}
		} else {
			flag[1] = false;
			flag[2] = false;
			flag[3] = false;
		}
	} else {
		flag[0] = false;
		flag[1] = false;
		flag[2] = false;
		flag[3] = false;
	}
	for (int i = 0; i < 4; i++) {
		cout << flag[i];
	}
	return 0;
}
