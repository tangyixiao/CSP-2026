#include <bits/stdc++.h>

using namespace std;

string c1, s1, c2, s2;

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    cin >> c1 >> s1 >> c2 >> s2;

    string row1 = s1.substr(0, 2);
    string row2 = s2.substr(0, 2);
    int pos1 = s1[2]- 'A' + 1;
    int pos2 = s2[2] - 'A' + 1;
    bool same_row = row1 == row2;
    bool same_side = (pos1 <= 3 && pos2 <= 3) || (pos1 >= 4 && pos2 >= 4);

    if (c1 == c2) printf("1");
    else printf("0");
    if (c1 == c2 && row1 == row2) printf("1");
    else printf("0");
    if (c1 == c2 && same_row && same_side) printf("1");
    else printf("0");
    if (c1 == c2 && same_row && abs(pos1 - pos2) == 1 && same_side) printf("1\n");
    else printf("0\n");

    return 0;
}
// rp++ 
// jbw ORZ ORZ ORZ
