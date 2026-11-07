#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll n,m;
ll a[600005],ans[600005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;++i)cin>>a[i];
	for(ll i=n;i>=1;--i)ans[i]++;
	for(ll i=1;i<=m;++i)cout<<ans[i]<<' ';
	return 0;
} 