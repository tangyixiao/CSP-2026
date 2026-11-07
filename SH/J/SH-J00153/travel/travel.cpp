#include <bits/stdc++.h>
using namespace std;

int c1, c2;
char s1[10], s2[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr), cout.tie(nullptr);

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    cin >> c1 >> s1 >> c2 >> s2;
    
    if (c1 != c2 || c1 % 15 == 1 || c2 % 15 == 1) {
        cout << "0000\n";
        return 0;
    } else if (s1[1] != s2[1] || s1[0] != s2[0]) {
        cout << "1000\n";
        return 0;
    } else if (s1[2] <= 'C' && s2[2] >= 'D') {
        cout << "1100\n";
        return 0;
    } else if (s1[2] >= 'D' && s2[2] <= 'C') {
        cout << "1100\n";
        return 0;
    }

    if (s1[2] >= 'D' && s2[2] >= 'D') {
        cout << "1111\n";
        return 0;
    } else if (s1[2] != s2[2] + 1 && s2[2] != s1[2] + 1) {
        cout << "1110\n";
        return 0;
    }

    cout << "1111\n";
    return 0;
}