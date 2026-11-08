#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int n,m;
int ans=0;
void dfs(int now,int cnt,int sum){
	if(cnt>m) return;
	if(now>n){
		ans=max(ans,sum);
		return;
	}
	dfs(now+1,cnt,sum);
	if(sum==-1)
		dfs(now+1,cnt+1,a[now]);
	else
		dfs(now+1,cnt+1,sum&a[now]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(1,0,-1);
	cout<<ans;
	return 0;
}
