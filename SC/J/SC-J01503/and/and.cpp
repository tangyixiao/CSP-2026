#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010];
bool v[200010];
long long ans;
void dfs(int x,long long sum,int y){
	if(x==m+1){
		ans=max(sum,ans);
		return;
	}
	for(int i=y;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			if(x==1){
				dfs(x+1,a[i],i);
			}else{
				dfs(x+1,sum&a[i],i);
			}
			v[i]=0;
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
	dfs(1,0,1);
	cout<<ans;
	return 0;
}