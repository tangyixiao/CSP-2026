#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],ans;
bool is[200005];
void dfs(int last,int x,int y){
	if(x==m+1){
		ans=max(ans,y);
		return;
	}
	if(last==n&&x<=m)return;
	for(int i=last+1;i<=n;i++){
		if(is[i])continue;
		y=y&a[i];
		is[i]=1;
		if(x==1)dfs(i,x+1,a[i]);
		else dfs(i,x+1,y);
		is[i]=0;
	}
}
void solve1(){
	dfs(0,1,0);
	cout<<ans;
}
void solve2(){
	if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}
	else if(m==n){
		for(int i=1;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}
	else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++)ans=max(ans,(a[i]&a[j]));
		}
		cout<<ans;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20)solve1();
	if(n<=2000)solve2();
	else solve1();
	return 0;
}
