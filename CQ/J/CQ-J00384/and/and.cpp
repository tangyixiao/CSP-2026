#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5;
ll n,m;
vector<ll>a(N);
vector<ll>res;
ll ans=LLONG_MIN;
bool aa[N];
void dfs(int s)
{
	if(s==m){
		ll now=res[0];
//		cout<<res[0]<<" ";
		for(int i=1;i<res.size();i++){
			now&=res[i];
//			cout<<res[i]<<" ";
		}
//		cout<<now<<endl;
		ans=max(ans,now);
		return;
	}for(int i=0;i<n;i++){
		if(aa[i]){
			aa[i]=false;
			res.push_back(a[i]);
			dfs(s+1);
			res.pop_back();
			aa[i]=true;
		}
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	for(int i=0;i<n;i++)aa[i]=true;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0);
	cout<<ans;
	return 0;
}
