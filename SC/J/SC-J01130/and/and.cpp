#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],cnt=-1;
bool flag[200005];
void dfs(int x,int d,int ans){
	if(d==m){
		cnt=max(cnt,ans);
		return;
	}
	for(int i=x+1;i<=n;++i){
		if(flag[i]==0){
			flag[i]=1;
			int s;
			if(ans==-1)s=a[i];
			else s=ans&a[i];
			dfs(i,d+1,s);
			flag[i]=0;
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	dfs(0,0,-1);
	cout<<cnt;
	return 0;
} 