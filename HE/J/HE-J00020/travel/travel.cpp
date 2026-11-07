#include <bits/stdc++.h>
#define int long long
using namespace std;
namespace qwq{
    static void main() noexcept{
        string c1,s1,c2,s2;
        cin >> c1 >> s1 >> c2 >> s2;
        bool same_car,same_pai,same_side,same_beside;
        same_car = (c1 == c2 ? true : false);
        same_pai = (same_car && (s1[0] == s2[0] && s1[1] == s2[1]) ? true : false);
        bool s1_left = (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C' ? true : false);
        bool s2_left = (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C' ? true : false);
        same_side = (same_pai && (s1_left == s2_left) ? true : false);
        same_beside = (same_side && ((s1[2] - s2[2] == 1) || (s1[2]-s2[2] == -1)));
        cout << same_car << same_pai << same_side << same_beside;
        cout << "\n";
    }
}
signed main() noexcept{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    qwq::main();
    return 0;
}
