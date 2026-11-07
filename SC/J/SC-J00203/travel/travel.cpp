#include <iostream>
using namespace std;

int main () {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string s1, s2;
    int c1, c2;
    cin >> c1 >> s1 >> c2 >> s2;
    int x1, y1, x2, y2;
    x1 = s1[0] - '0' + (s1[1] - '0') * 10;
    y1 = s1[2] - 'A';
    x2 = s2[0] - '0' + (s2[1] - '0') * 10;
    y2 = s2[2] - 'A';
    cout << (c1 == c2);
    cout << (c1 == c2 && x1 == x2);
    cout << (c1 == c2 && x1 == x2 && ((y1 < 3 && y2 < 3) || (y1 >= 3 && y2 >= 3)));
    cout << (c1 == c2 && x1 == x2 && ((y1 < 3 && y2 < 3) || (y1 >= 3 && y2 >= 3)) && (abs(x1 - x2) == 1 || abs(y1 - y2) == 1));
    return 0;
}
