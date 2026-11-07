#include <stdio.h>
char c1[10], s1[10], c2[10], s2[10];
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	bool b1, b2, b3, b4;
	scanf("%s%s%s%s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);
	b1 = (c1[1] == c2[1] && c1[2] == c2[2]);
	b2 = (b1&&(s1[1] == s2[1] && s1[2] == s2[2]));
	b3 = (b2
	      && (
	          (   s1[3] == 'A' && s2[3] == 'B')
	          || (s1[3] == 'A' && s2[3] == 'C')

	          || (s1[3] == 'B' && s2[3] == 'A')
	          || (s1[3] == 'B' && s2[3] == 'C')

	          || (s1[3] == 'C' && s2[3] == 'A')
	          || (s1[3] == 'C' && s2[3] == 'B')

	          || (s1[3] == 'D' && s2[3] == 'F')
	          || (s1[3] == 'F' && s2[3] == 'D')
	      ));

	b4 = (b3&&(
	          (   s1[3] == 'A' && s2[3] == 'B')
	          || (s1[3] == 'B' && s2[3] == 'A')

	          || (s1[3] == 'B' && s2[3] == 'C')
	          || (s1[3] == 'C' && s2[3] == 'B')

	          || (s1[3] == 'D' && s2[3] == 'F')
	          || (s1[3] == 'F' && s2[3] == 'D')
	      ));
	if (b1) putchar('1');
	else putchar('0');
	if (b2) putchar('1');
	else putchar('0');
	if (b3) putchar('1');
	else putchar('0');
	if (b4) putchar('1');
	else putchar('0');
}