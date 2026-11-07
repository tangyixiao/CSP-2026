#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll N=5e5+20;
vector<int> a;
ll n;
ll m;
ll ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	ll cnt=n-1;
	ll cc=n;
	while(cc--){
	vector<ll>b;
	for(int i=0;i<(int)a.size();i++){
		b.push_back(a[i]);
	}	
	for(int i=n-cc;i<(int)a.size();i++){
		ll t=a[i];
		int j;
		for(j=0;j<(int)b.size();j++){
			if(b[j]==t)break;
		}
		int l=(int)b.size();
		for(int i1=j;i1<l;i1++){
			b.pop_back();
		}
	}
		ll nc[N]={0};
		for(int i=0;i<(int)b.size();i++){
			if(nc[b[i]]==0){
				ans[b[i]]++;
				nc[b[i]]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
