#include<bits/stdc++.h>
using namespace std;
string s;
int a[200005],n,m,len,b[200005],dp[5005][7005];
long long ct;
char e;
long long dfs(int xu,int num){
	if(xu==m)return num;
	if(dp[xu%5005][num%7005])return dp[xu%5005][num%7005];
	long long ans=0;
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			b[i]=1;
			if(num==0)ans=max(ans,dfs(xu+1,a[i]));
			else ans=max(ans,dfs(xu+1,num&a[i]));
			b[i]=0;
		}
	}
	dp[xu%5005][num%7005]=ans;
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<dfs(0,0);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
