#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2, a1, a2, b1, b2, ans = "0000";
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;

int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1[0] == c2[0] && c1[1] == c2[1]) {
        a = 1;
    }
    for (int i = 0; i < 3; i++) {
        if(s1[i] >= '0' && s1[i]<= '9') {
            a1[i] = s1[i];
        }
        else b1[i] = s1[i];
        if(s2[i] >= '0' && s2[i]<= '9') {
            a2[i] = s2[i];
        }
        else b2[i] = s2[i];
    }
    if (a1[0] == a2[0] && a1[1] == a2[1]) b = 1;
    if (b1[0] <= 'C' && b2[0] <= 'C') c = 1;
    if (b1[0] >= 'D' && b2[0] >= 'D') d = 1;

    if (a == 1) {
        ans[0] = '1';
    }
    if (a == 1 && b == 1) {
        e = 1;
        ans[1] = '1';
    }
    if (c == 1 || d == 1) {
        f = 1;
    }
    if (e == 1 && f == 1) {
        ans[2] = '1';
    }
    if (b1[0] + 1 == b2[0] || b1[0] - 1 == b2[0]) {
        g = 1;
    }
    if (e == 1 && g == 1) {
        ans[3] = '1';
    }
    cout << ans;

    return 0;
}