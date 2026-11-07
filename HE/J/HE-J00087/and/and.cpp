#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
typedef long long ll;
ll n,m,a[maxn];
struct node{
    string str;
    ll val;
}s[maxn];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        int t = a[i];
        while(t != 0){
            s[i].str = to_string(t % 2) + s[i].str;
            t /= 2;
        }
        s[i].val = a[i];
    }
    ll ans = 0;
    for(int i = 0;i < 31;i++){
        vector<node>v;
        for(int j = 1;j <= n;j++){
            if((a[j] & (1 << i)) != 0){
                v.push_back(s[j]);
            }
        }
        sort(v.begin(),v.end(),[&](node x,node y){
                return x.str > y.str;
             });
        if(v.size() < m)continue;
        ll sum = v[0].val;
        for(int j = 1;j < m;j++)sum = sum & v[j].val;
        ans = max(ans,sum);
    }
    cout << ans << endl;
    return 0;
}
