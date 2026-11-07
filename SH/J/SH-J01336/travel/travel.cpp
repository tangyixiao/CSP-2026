#include <iostream>
using namespace std;

using LL = long long;

bool side(char ch) {
    return (ch == 'D' || ch == 'E');
}

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL x, y;
    string s, t;
    cin >> x >> s >> y >> t;
    LL cnt_1 = 0;
    if (x == y) {
        cout << 1; cnt_1++;
        if (s[0] == t[0] && s[1] == t[1]) {
            cout << 1; cnt_1++;
            if (side(s[2]) == side(t[2])) {
                cout << 1; cnt_1++;
                if (abs(s[2] - t[2]) == 1) {
                    cout << 1; cnt_1++;
                }
            }
        }
    }
    for (LL i = 0; i < 4 - cnt_1; i++) {
        cout << 0;
    }
    cout << endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
