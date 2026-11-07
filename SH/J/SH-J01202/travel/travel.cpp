#include <bits/stdc++.h>
using namespace std;
int c1, s1, c2, s2; char p1, p2;
inline bool side(char c) { return c == 'D' || c == 'F'; }
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> p1 >> c2 >> s2 >> p2;
    (c1 == c2 ? cout << "1",
        (s1 == s2 ? cout << "1",
            (side(p1) == side(p2) ?
                cout << (p1 + p2 - 'A' - 'C' ? "11" : "10")
                : cout << "00")
            : cout << "000")
        : cout << "0000");
    return 0;
}