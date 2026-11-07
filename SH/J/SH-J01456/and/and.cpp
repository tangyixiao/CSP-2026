#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
const ll INF=1e6;
ll n,m,a[N],ans=-INF;
void dfs(ll x,ll cnt,ll sum){
	if(x>n||sum==m){
		if(sum==m){
			ans=max(ans,cnt);
		}
		return;
	}
	dfs(x+1,cnt&a[x+1],sum+1);
	dfs(x+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,1048575,0);
	cout<<ans<<" ";
	return 0;
} 
