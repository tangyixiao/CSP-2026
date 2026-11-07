#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, b, m, c, d;
char ch;
inline void read(ll &x) {
	x = 0;
	ch = getchar();
	while (!isdigit(ch)) ch = getchar();
	while (isdigit(ch)) x = (x << 1) + (x << 3) + ch - '0', ch = getchar();
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	read(n), read(a);
	b = ch - 'A' + 1;
	read(m), read(c);
	d = ch - 'A' + 1;
	if (n != m) printf("0000\n");
	else {
		printf("1");
		if (a == c) {
			printf("1");
			if ((b <= 3 && d <= 3) || (b > 3 && d > 3)) {
				printf("1");
				printf("%d\n", (abs(b - d) == 1));
			}
			else printf("00\n");
		}
		else printf("000\n");
	}
	return 0;
}