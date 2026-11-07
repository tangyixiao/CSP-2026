#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
#define int long long
typedef long long ll;
typedef pair <ll, char> pic;
int n, last;
struct node {
    int l, r, ch;
};
node a[N];
ll ans = 0;

signed main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
//    unordered_map
    cin >> n;
    for(int i = 1;i <= n;i ++) {
        int x; char y;
        cin >> x >> y;
        if(y == a[last].ch) a[last].r += x;
        else a[last + 1] = {a[last].r + 1, a[last].r + x, y}, last ++;
    }
    n = last;
    int r = a[n].r, rid = n;
    for(int i = 1;i <= n && i < rid;i ++) {
        ll x = a[i].r - a[i].l + 1;
        int rg = r - x + 1;
        while(!(a[rid].l <= rg && rg <= a[rid].r)) {
            // r --- a[rid].l
            if(a[rid].ch != a[i].ch) ans += r - a[rid].l + 1;
            rid --, r = a[rid].r;
            //cout <<"SDF"<< endl;
        }
        if(a[rid].ch != a[i].ch) ans += r - rg + 1;
        if(rg == a[rid].l) rid -- ;
        r = rg - 1;
        //cout << rg << " " << rid << " " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
/*
3
1 a
1 c
5 b
*/
