#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
ll dfs(string s,ll cnt){
    ll mid=(ll)(s.size())/2;
    string left="";
    string right="";
    ll ct1=0;
    for(ll i=0;i<(ll)(s.size());i++){
        if(ct1<mid){
            ct1++;
            left=left+s[i];
        }else{
            if(s.size()%2==1&&i==(ll)(s.size()/2)){
                continue;
            }
            right=right+s[i];
        }
    }
	auto r=right;
	reverse(r.begin(),r.end());
	for(ll i=1;i<=(ll)(r.size());i++){
		if(left[i]!=r[s.size()-i+1]){
			cnt++;
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	if(1==2){
		ll rp=0;
		while(1){
			rp++;
		}
	}
	ll n;
	string s; 
	cin >> n;
	for(ll i=1;i<=n;i++) {
		char c;ll t;
		cin>>t>>c;
		for(ll j=1;j<=t;j++){
            s=s+c;
		}
	}
	cout<<dfs(s,0);
}
//最石山的一集，伪装版dfs;
//我要绿勾！！！