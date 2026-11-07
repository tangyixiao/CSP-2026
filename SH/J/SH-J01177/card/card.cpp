#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll INF=1e18;

/*
bool cmp(pll x,pll y){
	if (x.first!=y.first)return x.first<y.first;
	return x.second>y.second;
}*/

void solve(){
	ll n,m;
	cin>>n>>m;
	vector<pll> kill;
	vector<ll> appear[m+2];
	ll num[n+2];
	for (ll i=1;i<=n;i++){
		ll a;
		cin>>a;
		num[i]=a;
		if (appear[a].size()==0){
			appear[a].push_back(i);
			continue;
		}
		ll l=*appear[a].rbegin(),r=i;
		appear[a].push_back(i);
		pll lr;lr.first=l;lr.second=r;
		kill.push_back(lr);
		//cout<<l<<" "<<r<<'\n';
	}
	//for (auto i:kill){
	//	cout<<i.first<<" "<<i.second<<"\n";
	//}//cout<<"shhhh";
	sort(kill.begin(),kill.end());
	vector<ll> ans(m+2,0);
	
	for (ll l=1;l<=n;l++){
		/*
		ll mxl=l;
		auto d=upper_bound(kill.begin(),kill.end(),mxl);
		while (d!=kill.end()){
			ll left=d->first,right=d->second;
			for (ll j=mxl;j<left;j++){
				ans[num[j]]++;
			}mxl=right;mxl++;
			d=upper_bound(kill.begin(),kill.end(),mxl);
		}*/
		ll mxl=l;
		set<ll> dis;
		for (auto i:kill){
			if (mxl>i.first) continue;
			dis.insert(num[i.first]);
			for (ll l=mxl;l<i.first;l++){
				dis.insert(num[l]);
				//cout<<num[l]<<"\n";
			}mxl=i.second;
			//mxl++;
		}for (ll l=mxl;l<=n;l++){
			dis.insert(num[l]);
			//cout<<num[l]<<"\n";
		}for (auto i:dis){
			ans[i]++;
			//cout<<i<<"\n";
		}
	}
	for (ll i=1;i<=m;i++) cout<<ans[i]<<" ";
	return ;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	solve();
	return 0;
}
