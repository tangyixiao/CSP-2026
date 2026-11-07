#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[1000001]={},b[1000001]={},ans=0;
int v[1000001]={};
int dfs(int dep){
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			b[dep]=a[i];
			v[i]=1;
			if(dep==m){
				long long num=b[1];
				for(int j=1;j<=m;j++){
					num=num&b[j];
				}
				ans=max(num,ans);
			}
			else{
				dfs(dep+1);
			}
			v[i]=0;
			b[dep]=0;
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		long long qq=a[1];
		for(int i=1;i<=n;i++){
			qq=qq&a[i];
		}
		cout<<qq;
		return 0;
	}
	dfs(1);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
