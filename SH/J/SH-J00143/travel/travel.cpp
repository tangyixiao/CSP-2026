#include <stdio.h>
int main(void) {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    int c1, c2;
    char s1[4], s2[4];
    scanf("%d %s %d %s", &c1, s1, &c2, s2);
    putchar((c1 == c2) + '0');
    putchar(((c1 == c2) && (s1[0] == s2[0] && s1[1] == s2[1])) + '0');
    putchar((((c1 == c2) && (s1[0] == s2[0] && s1[1] == s2[1])) && 
    ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))) + '0');
    putchar(((((c1 == c2) && (s1[0] == s2[0] && s1[1] == s2[1])) && 
    ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))) &&
    (int(s1[2]) - s2[2] == 1 || int(s1[2]) - s2[2] == -1)) + '0');
    putchar('\n');
    return 0;
}