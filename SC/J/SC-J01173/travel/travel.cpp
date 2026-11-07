#include <cstdio>
// #define db(x...) fprintf(stdout, x)
const int N = 305;
int cid1, cid2, sid1, sid2;
char a, b;
int side[N];
int id[N];
int abs(int x) { return x < 0 ? -x : x; }
int main() {
    // xyy
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    side['D'] = side['F'] = 1;
    id['A'] = 1, id['B'] = 2, id['C'] = 3, id['D'] = 4, id['F'] = 5;
    char t;
    t = getchar();
    cid1 = cid1 * 10 + t - '0';
    t = getchar();
    cid1 = cid1 * 10 + t - '0';
    t = getchar();
    t = getchar();
    sid1 = sid1 * 10 + t - '0';
    t = getchar();
    sid1 = sid1 * 10 + t - '0';
    a = getchar();


    t = getchar();
    t = getchar();
    cid2 = cid2 * 10 + t - '0';
    t = getchar();
    cid2 = cid2 * 10 + t - '0';
    t = getchar();
    t = getchar();
    sid2 = sid2 * 10 + t - '0';
    t = getchar();
    sid2 = sid2 * 10 + t - '0';
    b = getchar();

    // db("%d %d %d %d\n", cid1, sid1, cid2, sid2);
    if(cid1 != cid2) {
        puts("0000");
    } else {
        if(sid1 != sid2) {
            puts("1000");
        } else {
            if(side[a] != side[b]) {
                puts("1100");
            } else {
                if(abs(id[a] - id[b]) != 1) {
                    puts("1110");
                } else puts("1111");
            }
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}