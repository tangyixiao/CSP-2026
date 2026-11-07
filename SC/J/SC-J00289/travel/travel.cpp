#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int c1, c2, s1a, s2a;
char s1b, s2b;
int f[5] = {};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d %2d%c %d %2d%c", &c1, &s1a, &s1b, &c2, &s2a, &s2b);
	f[1] = (c1 == c2);
	f[2] = (f[1] & (s1a == s2a));
	f[3] = (f[2] & ((s1b <= 'C' && s2b <= 'C') || (s1b > 'C' && s2b > 'C')));
	f[4] = (f[3] & (abs(s1b - s2b) == 1));
	for (int i = 1; i <= 4; i++) printf("%d", f[i]);
	return 0;
}