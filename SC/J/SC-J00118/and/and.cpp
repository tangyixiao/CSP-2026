#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long a[200005];
void dfs(int k,int x,int y){
	if(y==m){
		if(k>ans){
			ans=k;
		}return ;
	}for(int i=x+1;i<=n-m+y+1;i++){
		dfs(k&a[i],i,y+1);
	}return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n-m+1;i++){
		dfs(a[i],i,1);
	}cout<<ans;
	return 0;
}