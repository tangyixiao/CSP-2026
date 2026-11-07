#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,maxx=0;
const ll N=200009;
ll a[N];
void dfs(ll step,ll mx,ll k){
	if(step==m){
		if(mx>maxx) maxx=mx;
		return;
	}
	ll maxxx=mx;
	if(step<m&&k>n) return;
	if(step+n-k+1<m) return;
	if(step==0)
		for(int i=1;i<=n-k+1;++i) dfs(1,a[i],i+1);
	maxxx&=a[k];
	dfs(step+1,maxxx,k+1);
	dfs(step,mx,k+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	dfs(0,0,0);
	//step:当前选了几个数 
	//mx:当前最大按位与和 
	//k:当前在第k个位置 
	cout<<maxx;
	return 0;
}
