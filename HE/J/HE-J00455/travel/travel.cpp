#include <bits/stdc++.h>
using namespace std;
int n, m; string s, t;

int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
//    unordered_map
    cin >> n >> s >> m >> t;
    if(n == m) cout << 1;
    else cout << 0;
    int x = (s[0] - '0') * 10 + (s[1] - '0'), y = (t[0] - '0') * 10 + (t[1] - '0');
    if(n == m && x == y) cout << 1;
    else cout << 0;
    if(n == m && x == y && (s[2] <= 'C' && t[2] <= 'C' || s[2] > 'C' && t[2] > 'C')) cout << 1;
    else cout << 0;
    if(n == m && x == y && (s[2] <= 'C' && t[2] <= 'C' || s[2] > 'C' && t[2] > 'C') && abs(s[2] - t[2]) == 1) cout << 1;
    else cout << 0;
    return 0;
}
