#include<bits/stdc++.h>
using namespace std;
int n,m,a[210000];
long long ans,tem=pow(2,30)-1;
void dfs(int id,int k,long long sum){
	if (k==m){
		ans=max(sum,ans);
		return ;
	}else if(id==n+1){
		return ;
	}
	dfs(id+1,k+1,sum&a[id]);
	dfs(id+1,k,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		tem&a[i];
	}
	if (m==n){
		cout<<tem;
		return 0;
	}
	
	if (m==n-1){
		for (int i=1;i<=n;i++){
			tem=pow(2,30)-1;
			for (int j=1;j<=n;j++){
				if (j!=i)tem&=a[i];
			}
			ans=max(ans,tem);
		}
		return 0;
	}
	dfs(0,0,pow(2,30)-1);
	cout<<ans;
}
