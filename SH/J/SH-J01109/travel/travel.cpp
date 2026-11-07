#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1, s1, c2, s2;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    bool ans = (c1 == c2);
    cout << ans;
    ans &= (s1.substr(0, 2) == s2.substr(0, 2));
    cout << ans;
    ans &= (s1[2] <'D' && s2[2] < 'D' || s1[2] > 'C' && s2[2] > 'C');
    cout << ans;
    ans &= (abs(s1[2] - s2[2]) == 1);
    cout << ans << endl;
    return 0;
}