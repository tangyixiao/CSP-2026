#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define scf scanf
#define prf printf
#define fu(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ <= _r_; _zzz_++)
#define fd(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ >= _r_; _zzz_--)

struct Node{
    ll len;
    char c;
}a[200010];
int n, m;

signed main(){

    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    scf("%d", &n);
    ll all = 0;
    fu(i, 1, n){
        Node nw;
        scf("%lld %c", &nw.len, &nw.c);
        all += nw.len;
        if(m && nw.c == a[m].c){
            a[m].len += nw.len;
        }
        else{
            a[++m] = nw;
        }
    }

    ll ans = 0;

    int i = 1, j = m;
    while(j > i){
        if(a[i].c == a[j].c){
            if(a[i].len < a[j].len){
                a[j].len -= a[i++].len;
            }
            else{
                a[i].len -= a[j--].len;
            }
        }
        else{
            if(a[i].len < a[j].len){
                ans += a[i].len;
                a[j].len -= a[i++].len;
            }
            else{
                ans += a[j].len;
                a[i].len -= a[j--].len;
            }
        }
    }

    prf("%lld\n", ans);

    return 0;
}