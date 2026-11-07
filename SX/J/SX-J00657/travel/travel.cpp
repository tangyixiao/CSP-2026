#include <bits/stdc++.h>
using namespace std;
string ca, cb, sa, sb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ca >> sa >> cb >> sb;
	if (ca == cb) {
		printf("1");
		if (sa[0] == sb[0] && sa[1] == sb[1]) {
			printf("1");
			if (sa[2] == 'A' && sb[2] == 'B') {
				printf("11");
			}
			if (sa[2] == 'A' && sb[2] == 'C') {
				printf("10");
			}
			if (sa[2] == 'A' && sb[2] == 'D') {
				printf("00");
			}
			if (sa[2] == 'A' && sb[2] == 'F') {
				printf("00");
			}
			if (sa[2] == 'B' && sb[2] == 'A') {
				printf("11");
			}
			if (sa[2] == 'B' && sb[2] == 'C') {
				printf("11");
			}
			if (sa[2] == 'B' && sb[2] == 'D') {
				printf("00");
			}
			if (sa[2] == 'B' && sb[2] == 'F') {
				printf("00");
			}
			if (sa[2] == 'C' && sb[2] == 'A') {
				printf("10");
			}
			if (sa[2] == 'C' && sb[2] == 'B') {
				printf("11");
			}
			if (sa[2] == 'C' && sb[2] == 'D') {
				printf("00");
			}
			if (sa[2] == 'C' && sb[2] == 'F') {
				printf("00");
			}
			if (sa[2] == 'D' && sb[2] == 'A') {
				printf("00");
			}
			if (sa[2] == 'D' && sb[2] == 'B') {
				printf("00");
			}
			if (sa[2] == 'D' && sb[2] == 'C') {
				printf("00");
			}
			if (sa[2] == 'D' && sb[2] == 'F') {
				printf("11");
			}
			if (sa[2] == 'F' && sb[2] == 'A') {
				printf("00");
			}
			if (sa[2] == 'F' && sb[2] == 'B') {
				printf("00");
			}
			if (sa[2] == 'F' && sb[2] == 'C') {
				printf("00");
			}
			if (sa[2] == 'F' && sb[2] == 'D') {
				printf("11");
			}
		} else {
			printf("000");
		}
	} else {
		printf("0000");
	}
	return 0;
}
