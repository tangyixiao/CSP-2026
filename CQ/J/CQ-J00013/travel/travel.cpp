#include<bits/stdc++.h>
using namespace std;
#define int long long

string L1, Sit1, L2, Sit2;
int level1, line1, level2, line2;
char sit1, sit2;

int sit_int(string s) {
    return (s[0] - '0') * 10 + (s[1] - '0');
}

bool samece() {
    if(sit1 == 'C' || sit1 == 'A' || sit1 == 'B') {
        if(sit2 == 'B' || sit2 == 'A' || sit2 == 'C') {
            return 1;
        } else {
            return 0;
        }
    } else if(sit1 == 'F' || sit1 == 'D') {
        if(sit2 == 'F' || sit2 == 'D'){
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}

bool sitnext() {
    if((sit1 == 'D' || sit1 == 'F') && (sit2 == 'D' || sit2 == 'F')) {
        return 1;
    } else {
        return abs(sit1 - sit2) == 1;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    cin >> L1 >> Sit1 >> L2 >> Sit2;

    level1 = sit_int(L1);
    level2 = sit_int(L2);
    line1 = sit_int(Sit1);
    line2 = sit_int(Sit2);
    sit1 = Sit1[2];
    sit2 = Sit2[2];

    if(level1 == level2) {
        cout << 1;
        if(line1 == line2) {
            cout << 1;
            if(samece()) {
                cout << 1;
                if(sitnext()) {
                    cout << 1;
                }
                else {
                    cout << '0';
                }
            } else {
                cout << "00";
            }

        } else {
            cout << "000";
        }

    }else {
        cout << "0000";
    }

    return 0;
}
