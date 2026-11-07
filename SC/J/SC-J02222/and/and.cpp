#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+10;
ll n,m,a[N];
vector<ll> ve[50];//从后往前数e的第k位 
map<ll,ll> mp;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++) {
		ll t=a[i],k=1;
		while(t) {
			if(t%2==1) ve[k].push_back(a[i]);
			t/=2;
			k++;
		}
	}
	ll cur=0,ans=0;
	for(int i=32;i>=1;i--) {
		if(ve[i].size()==0) continue;
		for(int j=ve[i].size()-1;j>=0;j--) {
			if(cur==0) ans=ve[i][j],cur++,mp[ve[i][j]]=1;
			else if(cur<m&&mp[ve[i][j]]!=1) {
				if((ans&ve[i][j])==0) ans=ve[i][j];
				else ans&=ve[i][j],cur++,mp[ve[i][j]]=1;
			} 
			if(cur==m) break;
		}
		if(cur==m) break;
	}
	cout<<ans;
	return 0;
}
