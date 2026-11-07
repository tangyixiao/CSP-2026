#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    int a, c;
    string b, d;
    cin >> a >> b >> c >> d;
    if (a != c) {
        cout << "0000";
    } else {
        if (b[0] == d[0] && b[1] == d[1]) {
            if ((b[2] <= 'C' && d[2] <= 'C') || (b[2] > 'C' && d[2] > 'C')) {
                if ((b[2] + 1 == d[2] && b[2] != 'C') || (b[2] - 1 == d[2] && b[2] != 'D')) {
                    cout << "1111";
                } else {
                    cout << "1110";
                }
            } else {
                cout << "1100";
            }
        } else {
            cout << "1000";
        }
    }
    return 0;
}
