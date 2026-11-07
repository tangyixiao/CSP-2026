#include <bits/stdc++.h>
using namespace std;
map<char, int> ma;
map<char, int> ma2;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ma['A'] = 1, ma['B'] = 1, ma['C'] = 1, ma['D'] = 2, ma['F'] = 2;
	ma2['A'] = 1, ma2['B'] = 2, ma2['C'] = 3, ma2['D'] = 5, ma2['F'] = 6;
	cin >> a >> b >> c >> d;
	if (a == c) {
		printf("1");
		if (b[0] == d[0] && b[1] == d[1]) {
			printf("1");
			if (ma[b[2]] == ma[d[2]]) {
				printf("1");
				if (abs(ma2[b[2]] - ma2[d[2]]) == 1)
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
