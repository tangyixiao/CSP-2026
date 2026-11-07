#include <algorithm>
#include <cstdio>

#define fi first
#define se second
#define pb push_back
#define mod(x) (x -= x >= Q ? Q : 0)

using namespace std;

struct IO {
    IO () {
        freopen("travel.in", "r", stdin);
        freopen("travel.out", "w", stdout);
    }
    ~IO () {
        fclose(stdin);
        fclose(stdout);
    }
} io;

char s1[5], s2[5], s3[5], s4[5];

int main () {
    // zyt
    scanf("%s%s%s%s", s1, s2, s3, s4);
    for (int i = 0; i < 2; i++)
        if (s1[i] != s3[i]) {
            printf("0000\n");
            return 0;
        }
    for (int i = 0; i < 2; i++)
        if (s2[i] != s4[i]) {
            printf("1000\n");
            return 0;
        }
    if ((s2[2] <= 'C' && s4[2] > 'C') || (s2[2] > 'C' && s4[2] <= 'C')) {
        printf("1100\n");
        return 0;
    }
    if (abs(s2[2] - s4[2]) > 1) {
        printf("1110\n");
        return 0;
    }
    printf("1111\n");
    return 0;
}