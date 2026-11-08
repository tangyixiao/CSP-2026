/*
4 2
3 15 12 12

*/
#include<bits/stdc++.h>
using namespace std;
#define xiawolei ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define aodaita freopen("and.in","r",stdin);freopen("and.out","w",stdout);
using ll=long long;
using ld=long double;
const ll o=2e5+5;
const ll oc=0x3f3f3f3f3f3f3f3f;
const ll mod=1e9+7;
const ld eps=0.0001;
ll n,m,a[o],len,iid;
string s[o];
void build(ll i,ll num){
	while(num>0){
		if(num&1)s[i]+='1';
		else s[i]+='0';
		num>>=1;
	}
	return;
}
struct node{
	ll i;
	string s1;
	bool operator<(const node& x)const{
		return s1>x.s1;
	}
};
vector<node>id[o];
int main(){
	xiawolei
	aodaita
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		build(i,a[i]);
	}
	for(int i=1;i<=n;i++){
		len=max(len,(ll)s[i].size());
	}
	for(int i=1;i<=n;i++){
		if(s[i].size()<len){
			for(int j=s[i].size();j<len;j++){
				s[i]+='0';
			}
		}
		reverse(s[i].begin(),s[i].end());
	}
	for(int i=0;i<len;i++){
		iid=i;
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1'){
				id[i].push_back({j,s[j]});
			}
		}
		if(id[i].size()>=m)break;
	}
	if(id[iid].size()==0){
		cout<<0;
		return 0;
	}
	sort(id[iid].begin(),id[iid].end());
	ll ans=a[id[iid][0].i];
	ll cnt=0;
	for(auto it:id[iid]){
		cnt++;
		ans=(ans&a[it.i]);
		if(cnt==m)break;
	}
	cout<<ans;
	return 0;
}
