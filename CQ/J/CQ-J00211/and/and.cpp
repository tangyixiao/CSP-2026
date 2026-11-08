#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const int N=2e5+10;
ll n,m,a[N],ans=0,ma;
ll bic[N],bid[N];
vector<ll> v[N];
priority_queue<pll,vector<pll>,less<> > pq;
void bis(int x,int y){
	while(y){
		int u=y%2;
		v[x].push_back(u);
		y/=2;
		if(u==1)bic[x]++;
	}
	ma=max(ma,ll(v[x].size()));
}
ll bu(ll x){
	ll h=1;
	while(x--){
		h*=2;
	}
	return h;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bid[i]=a[i];
		bis(i,a[i]);
	}
	for(int i=1;i<=n;i++){
		while(v[i].size()<=ma){
			v[i].push_back(0);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<=ma;j++){
//			cout<<v[i][j]<<" ";
//		}cout<<"\n";
//	}
	for(int i=ma-1;i>=0;i--){
		ll k=0;
		for(int j=1;j<=n;j++){
			if(v[j][i]==1){
				k++;
				pq.push({bid[j],bic[j]});
				bid[j]-=bu(i);
				bic[j]--;
			}
		} 
		if(k>=m){
//			while(pq.size()){
//				cout<<pq.top().first<<" ";
//				pq.pop();
//			}
			ans=pq.top().first;
			ll k1=m;
		//	cout<<"pq.top().first:"<<pq.top().first<<"\n";
		pq.pop();
			while(--k1){
				ans=(ans&pq.top().first);
				//cout<<"pq.top().first:"<<pq.top().first<<"\n";
				pq.pop();
			}
			cout<<ans;
			return 0;
		}else{
				while(pq.size()){
				//cout<<pq.top().first<<" ";
				pq.pop();
			}
		}
	}
	return 0;
}
