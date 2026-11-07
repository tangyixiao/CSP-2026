#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5000+10;
int n,m,a[maxn],ans=0;
void dfs(int x,int step,int sum){
	if(step==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=x;i<n;i++) dfs(i+1,step+1,(sum & a[i+1]));
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) dfs(i,1,a[i]);
	cout<<ans<<endl;
	return 0;
}