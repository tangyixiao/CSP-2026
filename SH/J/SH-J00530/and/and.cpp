#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
#define ll long long
#define pii pair<ll,int>
int n,m;
ll a[N],ans;
vector<ll> cnt[50];
vector<pii> d;
int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		for(ll k=0;(1<<k)<=a[i];k++){
			if(a[i]&(1<<k))cnt[k].push_back(a[i]); 
		}
	}
//	cout<<log2(65536)<<endl;
//	cout<<cnt[ 15 ].size()<<endl;
	for(ll i=30;i>=0;i--){
		if(cnt[i].size()>=m){
			if(d.size()){
				ll ret=0;
				for(int j=0;j<d.size();j++){
					if(d[j].second==0)continue;
//					cout<< d[j].first <<' ';
					if(d[j].first&(1<<i))ret++;
				}
//				cout<<endl;
				if(ret>=m){
//					cout<<i<<' '<<cnt[i].size()<<' '<<ret<<endl;
					ans+=(1<<i);
					for(int j=0;j<d.size();j++){
						if(d[j].second==0)continue;
						if(!(d[j].first&(1<<i)))d[j].second=0;
					}
				}
			}else{
				ans=(1<<i);
				for(auto j:cnt[i]){
					d.push_back({j,1});
				}	
			}
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
