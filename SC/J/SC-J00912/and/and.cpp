#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const ll N=2e7+5,M=1e3+5;
ll n,m,k,d,c,ans=-1,cnt; 
ll a[N],t[N];
vector<ll>v[M];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;++i){
		cin>>a[i];
		t[i]=a[i];
	}
	while(d<=30){
		for(ll i=1;i<=n;++i){
			if(t[i]&1)v[d].push_back(i);
			t[i]=t[i]>>1;
		}
		if(v[d].size()<m)break;
		++d;
	}
	d--;
	for(ll i=0;i+m<v[d].size();++i){
		cnt=v[d][i];
		for(ll j=i+1;j<=i+m;++j)cnt=cnt&v[d][j];
		ans=max(ans,cnt);
	}
	cout<<ans;
	return 0;
} 