#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
int n,m;
ll a[N];
ll ans;
void dfs(ll i,ll cnt,ll sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(i>n)return;
	if(sum==0)dfs(i+1,cnt+1,a[i]);
	else dfs(i+1,cnt+1,sum&a[i]);
	dfs(i+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	dfs(1,0,0);
	cout<<ans;
	return 0;
}