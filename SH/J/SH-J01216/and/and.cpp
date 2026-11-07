#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans=-1;
int a[200005];
void dfs(int i,int j,int num){
	if(num==-1){
		if(i>n) return;
		dfs(i+1,j+1,a[i]);
		dfs(i+1,j,-1);
		return;
	}else{
		if(j==m){
			ans=max(ans,num);
			return;
		} 
		if(i>n) return;
		dfs(i+1,j+1,num&a[i]);
		dfs(i+1,j,num);
		return;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1) cout<<maxn;
	else{
		dfs(1,0,-1);
		cout<<ans;
	}
} 
