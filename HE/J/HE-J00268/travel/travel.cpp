#include <cstdio>

char c1[5], s1[5], c2[5], s2[5];

bool judge1(char ch1, char ch2) { // 判断是否在同侧
    return (('A' <= ch1 && ch1 <= 'C') && ('A' <= ch2 && ch2 <= 'C'))
        || ((ch1 == 'D' || ch1 == 'F') && (ch2 == 'D' || ch2 == 'F'));
}

bool judge2(char ch1, char ch2) { // 判断是否相邻
    if (ch1 > ch2) return judge2(ch2, ch1);
    if (judge1('A', ch1)) return ch2 - ch1 == 1;
    return ch1 == 'D' && ch2 == 'F';
}

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    scanf("%s%s%s%s", c1, s1, c2, s2);

    int r1 = (c1[0] - '0') * 10 + c1[1] - '0'; // R 的车厢
    int r2 = (s1[0] - '0') * 10 + s1[1] - '0'; // R 的排号
    char r3 = s1[2]; // R 的座位号
    int x1 = (c2[0] - '0') * 10 + c2[1] - '0';
    int x2 = (s2[0] - '0') * 10 + s2[1] - '0';
    char x3 = s2[2];

    bool b1 = (r1 == x1);
    bool b2 = (b1 && r2 == x2);
    bool b3 = (b2 && judge1(r3, x3));
    bool b4 = (b3 && judge2(r3, x3));

    printf("%d%d%d%d\n", b1, b2, b3, b4);
    return 0;
}
