#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
#define ll long long
ll n,m,k,ans,g[50];
vector<ll>e;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		ll a;
		cin>>a;
		e.push_back(a);
		for(ll j=0;j<=31;j++){
			if(a&(1<<j)){
				g[j]++;
			}
		}
	}
	while(1){
		vector<ll>nw;
		ll p=31;
		while(p>=0&&g[p]<m)p--;
		if(p==-1){
			break;
		}
		ans+=1<<p;
		for(ll i:e){
			if(i&(1<<p)){
				nw.push_back(i-(1<<p));
				
			}
		}
		fill(g,g+40,0);
		e.clear();
		for(ll i:nw){
			e.push_back(i);
			for(ll j=0;j<=31;j++){
				if(i&(1<<j)){
					g[j]++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}