#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a != c)
		printf("0000");
	else {
		if (b[0] == d[0] && b[1] == d[1]) {
			bool f1 = b[2] <= 'C', f2 = d[2] <= 'C';
			bool is = f1 ^f2;
			if (is == 1)
				printf("1100");
			else {
				if (abs(b[2] - d[2]) == 1)
					printf("1111");
				else
					printf("1110");
			}
		} else
			printf("1000");
	}
	return 0;
}
