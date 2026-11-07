#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200000],dp[200000],ans,as,d; 
void dfs(int y,long long ans,int o){
	if(y==m+1){
	    as=max(ans,as);
	}
	for(int i=o+1;i<=n;i++){
		ans=a[o]&a[i];
		o=i;
		dfs(y+1,ans,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,ans,1);
	cout<<as;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
