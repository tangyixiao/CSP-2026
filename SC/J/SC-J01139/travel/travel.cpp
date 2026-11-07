#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, e, f;
string p, q;
signed main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    
    cin >> n >> p >> m >> q;
    
    cout << (n == m) 
         << (n == m && p[0] == q[0] && p[1] == q[1]) 
         << (n == m && p[0] == q[0] && p[1] == q[1] && ((p[2] <= 'C') == (q[2] <= 'C'))) 
         << (n == m && p[0] == q[0] && p[1] == q[1] && abs(p[2] - q[2]) == 1 && ((p[2] <= 'C') == (q[2] <= 'C'))) << '\n';

    return 0;
}