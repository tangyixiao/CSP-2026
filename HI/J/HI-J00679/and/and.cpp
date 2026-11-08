#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long ans;
int n,m;
void dfs(long long z,int w,int len){
	if(len==m){
		ans=max(ans,z);
		return ;
	}
	else{
		for(int i=w+1;i<=n;i++){
			dfs((z&a[i]),i,len+1);
			dfs(a[i],i,1);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(a[1],1,1);
	cout<<ans;
	return 0;
}
