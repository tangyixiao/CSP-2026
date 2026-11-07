#include<bits/stdc++.h>
using namespace std;
int a[200005],m,n,ans=0;
void dfs(int sum,int id,int cnt){
	if(cnt==m)
		ans=max(ans,sum);
	if(id>n) return;
	if(cnt>m) return;
	if(sum!=0)
	    dfs(sum&a[id],id+1,cnt+1);
	else dfs(a[id],id+1,cnt+1);
	dfs(sum,id+1,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20)
	    dfs(0,1,0);
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	}
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)
			    ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	return 0;
}
