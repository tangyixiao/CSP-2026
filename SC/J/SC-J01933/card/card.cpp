#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll N=5e5+5;
ll n,m,a[N],ans[N],f;
vector<ll> v;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		v.clear();
		unordered_map<ll,ll> mp1,mp2;
		for(ll j=i;j<=n;j++){
			if(mp1[a[j]]==0){
				v.push_back(a[j]);
				mp2[a[j]]=v.size()-1;
				mp1[a[j]]=1;
			}else{
				for(ll k=mp2[a[j]]+1;k<v.size();k++){
					mp1[v[k]]=mp2[v[k]]=0;
				}
				v.erase(v.begin()+mp2[a[j]],v.end());
				mp2[a[j]]=0;
				v.push_back(a[j]);
				mp2[a[j]]=v.size()-1;
			}
		}
		for(auto k:v){
			ans[k]++;
		}
	}
	for(ll k=1;k<=m;k++){
		cout<<ans[k]<<' ';
	}
	return 0;
}
/**
5 5
1 2 3 4 5
 
**/