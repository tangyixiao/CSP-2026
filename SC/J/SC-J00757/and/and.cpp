#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans=0;
void dfs(int tmp,int r,int t){
	if(t==m){ans=max(tmp,ans);return;}
	for(int i=r+1;i<=n;i++)if(a[i])dfs(tmp&a[i],i,t+1);
}int main(){
	freopen("and.in","r",stdin);
	freopen("ans1.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n-m+1;i++)dfs(a[i],i,1);
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
}