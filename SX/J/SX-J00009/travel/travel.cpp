#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool flag = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		printf("1");
	else
		printf("0");

	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1])
			printf("1");
		else
			printf("0");
	} else
		printf("0");

	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			int num1 = 0;
			int num2 = 0;
			if (s1[2] == 'D')
				num1 = 1;
			if (s2[2] == 'D')
				num2 = 1;
			if (s1[2] == 'F')
				num1 = 1;
			if (s2[2] == 'F')
				num2 = 1;
			if (num1 != num2)
				printf("0");
			else
				printf("1"), flag = 1;
		} else
			printf("0");
	} else
		printf("0");

	if (flag) {
		if (s1[2] == 'A' && s2[2] == 'B')
			printf("1");
		else if (s1[2] == 'B' && s2[2] == 'A')
			printf("1");
		else if (s1[2] == 'B' && s2[2] == 'C')
			printf("1");
		else if (s1[2] == 'C' && s2[2] == 'B')
			printf("1");
		else if (s1[2] == 'D' && s2[2] == 'F')
			printf("1");
		else if (s1[2] == 'F' && s2[2] == 'D')
			printf("1");
		else
			printf("0");
	} else
		printf("0");
	return 0;
}
