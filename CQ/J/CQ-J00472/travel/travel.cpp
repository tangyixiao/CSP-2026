#include <bits/stdc++.h>
using namespace std;

string a, b, c, d;

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> a >> b >> c >> d;
    bool b1 = (a == c), b2 = (b1 && b.substr(0, 2) == d.substr(0, 2)), b3 = (b2 && (b[2] <= 'C') == (d[2] <= 'C')), b4 = (b3 && (abs(b[2] - d[2]) == 1));
    printf("%d%d%d%d", b1, b2, b3, b4);
}