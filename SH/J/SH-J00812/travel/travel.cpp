#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> c2 >> s1 >> s2;
    for(int i = 0; i <= 1; i++) {
        if(c1[i] != s1[i]) {
            cout << "0000";
            return 0;
        }
        if(i) {
            cout << 1;
            for(int j = 0; j <= 1; j++) {
                if(c2[j] != s2[j]) {
                    cout << "000";
                    break;
                }
                if(j) {
                    cout << 1;
                    if(c2[2] - 'A' <= 2 && s2[2] - 'A' <= 2) {
                        cout << 1;
                        if(abs(c2[2] - s2[2]) == 1) {
                            cout << 1;
                            return 0;
                        } else {
                            cout << 0;
                            return 0;
                        }
                    } else if(c2[2] - 'A' >= 3 && s2[2] - 'A' >= 3) {
                        cout << "11";
                        return 0;
                    } else {
                        cout << "00";
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
