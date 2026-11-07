#include <bits/stdc++.h>
#define set multiset
using namespace std;
typedef long long ll;
const ll N = 3e5+9;
ll n,k;
ll a[N];
bool bit[35][N];
ll cnt[35];
set<ll> nxt;
set<ll> ans;
ll fin;
set<ll> can[35];
set<ll>::iterator it;
ll mxb = 0;
bool cmp(int x,int y){
	return x>y;
}
void build(ll x,ll id){
	ll ooos = x;
	ll r = 0;
	while(x){
		if(x&1){
			bit[r][id] = 1,cnt[r]++;
			can[r].insert(ooos);
		}
		r++;
		mxb = max(mxb,r);
		x >>= 1;
	}
}
bool isA(){
    for(int i = 1;i <= n;i++){
        int lg = 0;
        while((1<<lg) <= a[i])lg++;
        if((1<<lg)-1 != a[i])return 0;
    }
    return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> k;
	for(ll i = 1;i <= n;i++){
		cin >> a[i];
		build(a[i],i);
	}
	if(k == 1){
        sort(a+1,a+n+1);
        cout << a[n] << endl;
        return 0;
	}
	if(k == n){
        ll ohohoh = a[1];
        for(ll i = 2;i <= n;i++){
            ohohoh &= a[i];
        }
        cout << ohohoh << endl;
        return 0;
	}
	if(k == 2){
        ll rlf = 0;
        for(ll i = 1;i < n;i++){
            for(ll j = i+1;j <= n;j++){
                rlf = max(rlf,a[i]&a[j]);
            }
        }
        cout << rlf << endl;
        return 0;
	}
	if(k == n-1){
        ll fff = 0;
        ll pls = 0;
        for(ll p = mxb;p >= 0;p--){
            if(cnt[p]<k)continue;
            if(cnt[p] == n-1){
                fff = *can[p].begin();
                for(it = can[p].begin();it != can[p].end();it++){
                    if(it == can[p].begin())continue;
                    fff &= (*it);
                }
                break;
            }
            if(cnt[p] == n){
                pls += (1<<p);
            }
        }
        if(fff == 0)cout << pls << endl;
        else cout << fff << endl;
        return 0;
	}
	if(isA()){
        sort(a+1,a+n+1);
        ll fffff = a[n];
        for(int i = n;i >= n-k+1;i--){
            fffff &= a[i];
        }
        cout << fffff << endl;
        return 0;
	}
	for(ll p = mxb;p >= 0;p--){
		if(cnt[p]<k)continue;
		if(ans.empty()){
			for(it = can[p].begin();it != can[p].end();it++){
				ans.insert(*it);
			}
			nxt = ans;
		}
		else{
			for(it = ans.begin();it!=ans.end();it++){
				if(!can[p].count(*it) && ans.count(*it)){
				    ll s = *it;
					ans.erase(s);
				}
			}
			if(ans.size()<k){
				ans = nxt;
			}
			else if(ans.size()==k)break;
			else nxt = ans;
		}
	}
	fin = *ans.begin();
	if(k == 1){
		cout << fin << endl;
		return 0;
	}
	for(it = ans.begin();it != ans.end();it++){
		if(it == ans.begin())continue;
		fin &= (*it);
	}
	cout << fin << endl;
	return 0;
}
