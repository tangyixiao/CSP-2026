#include<bits/stdc++.h>
using namespace std;
int n,m,ans=-1;
int a[200005],c[200005];
bool b[200005];
void dfs(int step){
	if(step>m){
		int res=c[1];
		for(int i=2;i<=m;i++){
			res&=c[i];
		}
		ans=max(ans,res);
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			for(int j=1;j<=i;j++){
				b[i]=1;
			}
			c[step]=a[i];
			dfs(step+1);
			for(int j=1;j<=i;j++){
				b[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<ans; 
	return 0;
}