#include <cstdio>

int a, a1, b, b1, i;
char s[4][10], c, c1;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%s %s %s %s", s[0], s[1], s[2], s[3]);
	while(s[0][i]) a *= 10, a += s[0][i] - '0', i ++;
	i = 0;
	while(s[2][i]) a1 *= 10, a1 += s[2][i] - '0', i ++;
	i = 0;
	while(s[1][i] >= '0' && s[1][i] <= '9') b *= 10, b += s[1][i] - '0', i ++;
	c = s[1][i], i = 0;
	while(s[3][i] >= '0' && s[3][i] <= '9') b1 *= 10, b1 += s[3][i] - '0', i ++;
	c1 = s[3][i];
	printf("%d%d%d%d\n", a == a1, a == a1 && b == b1, a == a1 && b == b1 && 
	((c <= 'C') ==  (c1 <= 'C')), a == a1 && b == b1 && ((c <= 'C') ==  (c1 <= 'C')) && (c - c1 == 1 || c1 - c == 1));
	return 0;
} 