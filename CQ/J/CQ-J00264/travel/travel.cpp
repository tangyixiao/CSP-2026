/* encoding: utf-8 */
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int c1, c2;
string s1, s2;

inline int side(char c){
    if (c == 'A' || c == 'B' || c == 'C')
        return 0;
    return 1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 != c2)
        cout << "0000";
    else {
        cout << 1;
        if (s1.substr(0, 2) != s2.substr(0, 2))
            cout << "000";
        else {
            cout << 1;
            if (side(s1[2]) != side(s2[2]))
                cout << "00";
            else {
                cout << 1;
                string he = s1.substr(2, 1) + s2.substr(2, 1);
                if (he == "AB" || he == "BA" || he == "BC" || he == "CB" || he == "DF" || he == "FD")
                    cout << 1;
                else
                    cout << 0;
            }
        }
    }
    cout << endl;
    return 0;
}

/* 今年的 CSP-J 第一题还是有点水 */