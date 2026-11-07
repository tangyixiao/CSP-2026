#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, ss1, ss2;
char cc1, cc2;
bool f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		printf("1");
	else {
		printf("0000\n");
		return 0;
	}
	ss1 = s1.substr(0, 2);
	ss2 = s2.substr(0, 2);
	cc1 = s1[2];
	cc2 = s2[2];
	if (ss1 == ss2) {
		cc1 = s1[2];
		cc2 = s2[2];
		printf("1");
		if (cc1 == 'D') {
			f = true;
			if (cc2 == 'F')
				printf("11");
			else
				printf("00");
		} else if (cc1 == 'F') {
			f = true;
			if (cc2 == 'D')
				printf("11");
			else
				printf("00");
		} else if (cc2 == 'D') {
			f = true;
			if (cc1 == 'F')
				printf("11");
			else
				printf("00");
		} else if (cc2 == 'F') {
			f = true;
			if (cc1 == 'D')
				printf("11");
			else
				printf("00");
		} else
			printf("1");
		if (f == false) {
			if (cc1 + 1 == cc2 || cc2 + 1 == cc1)
				printf("1\n");
			else
				printf("0\n");
		}
	} else
		printf("000\n");
	return 0;
}
