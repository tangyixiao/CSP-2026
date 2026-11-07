#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm> 

int num(std :: string &s) { return s[0] * 10 + s[1]; }

int main() {

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    std :: string c1, c2, s1, s2;
    std :: cin >> c1 >> s1 >> c2 >> s2;
    
    bool f1, f2, f3, f4;
    f1 = f2 = f3 = f4 = false;
    if (num(c1) == num(c2)) {
        f1 = true;
        if (num(s1) == num(s2)) {
            f2 = true;
            if ((s1[2] - 'A' <= 2) == (s2[2] - 'A' <= 2)) {
                f3 = true;
                if (std :: abs(s1[2] - s2[2]) == 1)
                    f4 = true;
            }
        }
    }

    printf("%d%d%d%d\n", f1, f2, f3, f4);

    return 0;
}