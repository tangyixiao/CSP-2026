#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long u64;

int main() {
#ifndef _DEBUG
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
#endif
	u64 a_x, b_x;
	char a_p[4], b_p[4];
	scanf("%llu %s %llu %s", &a_x, &a_p, &b_x, &b_p);
	printf("%d%d%d%d\n", a_x == b_x, a_x == b_x&&a_p[0] == b_p[0] && a_p[1] == b_p[1], a_x == b_x&&a_p[0] == b_p[0]
	       && a_p[1] == b_p[1]
	       && ((a_p[2] <= 'C' && b_p[2] <= 'C') || (a_p[2] > 'C' && b_p[2] > 'C')), a_x == b_x&&a_p[0] == b_p[0]
	       && a_p[1] == b_p[1]
	       && ((a_p[2] <= 'C' && b_p[2] <= 'C') || (a_p[2] > 'C' && b_p[2] > 'C')) && abs(a_p[2] - b_p[2]) == 1);
	return 0;
}
