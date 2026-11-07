#include <bits/stdc++.h>
using namespace std;
int c1, c2;
char C1, C2;
string s1, s2, num1, num2;

int Read() {
	int num = 0, sign = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')
			sign = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
		num = (num << 1) + (num << 3) + (c ^ 48), c = getchar();
	return num * sign;
}

string Reads() {
	string S;
	char c = getchar();
	while ((c < '0' || c > '9') && c != 'A' && c != 'B' && c != 'C' && c != 'D' && c != 'E')
		c = getchar();
	while ((c >= '0' && c <= '9') || c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E')
		S.push_back(c), c = getchar();
	return S;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	c1 = Read(), s1 = Reads(), c2 = Read(), s2 = Reads(), num1 = s1.substr(0, 2), num2 = s2.substr(0, 2), C1 = s1[2],
	C2 = s2[2];
	if (c1 == c2) {
		printf("1");
		if (num1 == num2) {
			printf("1");
			if ((C1 <= 'C' && C2 <= 'C') || (C1 >= 'D' && C2 >= 'D')) {
				printf("1");
				if (abs(C1 - C2) == 1)
					printf("1");
				else
					printf("0");
			} else
				printf("00");
		} else
			printf("000");
	} else
		printf("0000");
	return 0;
}