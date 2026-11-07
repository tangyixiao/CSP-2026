#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define scf scanf
#define prf printf
#define fu(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ <= _r_; _zzz_++)
#define fd(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ >= _r_; _zzz_--)

ll a[200010];
int n, m;
vector<int> have[31];
vector<int> w;

signed main(){

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    scf("%d%d", &n, &m);
    fu(i, 1, n){
        scf("%lld", &a[i]);
    }

    sort(a + 1, a + n + 1);

    fu(j, 0, 30){
        fu(i, 1, n){
            if(a[i] & (1 << j)){
                have[j].push_back(i);
            }
        }
    }

    ll ans = 0;

    bool f = 0;
    fd(j, 30, 0){
        if(!f){
            if(have[j].size() >= m){
                f = 1;
                w = have[j];
                ans |= (1 << j);
            }
            continue;
        }
        vector<int> nw;
        int i = 0, p = 0;
        while(i < have[j].size() && p < w.size()){
            if(have[j][i] == w[p]){
                nw.push_back(w[p]);
                i++, p++;
            }
            else{
                if(have[j][i] < w[p])i++;
                else p++;
            }
        }
        if(nw.size() < m)continue;
        else w.swap(nw), ans |= (1 << j);
    }

    prf("%lld\n", ans);
    
    return 0;
}