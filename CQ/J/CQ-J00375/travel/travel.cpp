/*
小模拟
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string c1, s1, c2, s2;
int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    cout << int(c1 == c2);
    cout << int(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2));
    cout << int(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && !((s1[2] - 'A' <= 2) ^ (s2[2] - 'A' <= 2)));
    cout << int(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && !((s1[2] - 'A' <= 2) ^ (s2[2] - 'A' <= 2)) && abs(s1[2] - s2[2]) == 1);
    return 0;
}

// wjy 是猫娘！！！