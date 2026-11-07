#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    int c1, c2;
    char s1[10], s2[10];
    int row1, row2;
    char seat1, seat2;
    bool f1, f2, f3, f4;
    scanf("%d %s %d %s", &c1, s1, &c2, s2);
    row1 = (s1[0] - '0') * 10 + (s1[1] - '0');
    row2 = (s2[0] - '0') * 10 + (s2[1] - '0');
    seat1 = s1[2];
    seat2 = s2[2];
    f1 = c1 == c2;
    f2 = f1 && row1 == row2;
    f3 = f2 &&
             (seat1 == 'A' || seat1 == 'B' || seat1 == 'C') &&
             (seat2 == 'A' || seat2 == 'B' || seat2 == 'C') ||
         (seat1 == 'D' || seat1 == 'F') && (seat2 == 'D' || seat2 == 'F');
    if (f1 && row1 == row2)
        if (seat1 == 'A' && seat2 == 'B' || seat1 == 'B' && seat2 == 'A' ||
            seat1 == 'B' && seat2 == 'C' || seat1 == 'C' && seat2 == 'B' ||
            seat1 == 'D' && seat2 == 'F' || seat1 == 'F' && seat2 == 'D')
            f4 = 1;
        else
            f4 = 0;
    else if (f1 && (row1 == row2 + 1 || row1 == row2 - 1))
        f4 = seat1 == seat2;
    else
        f4 = 0;
    printf("%d%d%d%d\n", f1, f2, f3, f4);
    fclose(stdin);
    fclose(stdout);
    return 0;
}