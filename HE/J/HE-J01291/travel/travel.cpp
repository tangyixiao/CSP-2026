#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;

    if (c1 == c2) {
        cout << "1";
        char a = s1[0];
        char b = s2[0];
        char a1 = s1[1];
        char b1 = s2[1];
        if (a == b && a1 == b1) {
            cout << "1";
            char a2 = s1[2];
            char b2 = s2[2];
            if (a2 == 'C' && b2 == 'D') {
                cout << "00";
            } else {
                cout << "1";
                if (b2 - a2 == 1 || a2 - b2 == 1) {
                    cout << "1";

                }else {
                    cout <<"0";
                }
            }

        } else {
            cout <<"000";
        }

    } else {
        cout << "0000";
    }


    return 0;
}
