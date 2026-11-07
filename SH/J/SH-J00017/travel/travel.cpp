#include <cstdio>
char c1[10];
char s1[10];
char c2[10];
char s2[10];
bool res1, res2, res3, res4;
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    scanf("%s %s %s %s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);
    if(c1[1] == c2[1] && c1[2] == c2[2])
    {
        res1 = true;
        if(s1[1] == s2[1] && s1[2] == s2[2])
        {
            res2 = true;
            if((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] >= 'D' && s2[3] >= 'D'))
            {
                res3 = true;
                char p1 = s1[3], p2 = s2[3];
                if(p1 <= p2) p1 ^= p2 ^= p1 ^= p2;
                if((p2 == 'A' && p1 == 'B') ||
                   (p2 == 'B' && p1 == 'C') ||
                   (p2 == 'D' && p1 == 'F')) res4 = true;
            }
        }
    }
    printf("%d%d%d%d", res1, res2, res3, res4);
    return 0;
}
// Finish at 8:53
// The password costs me 10 minutes
// I see Trick||Treat! as TrickllTreat...
