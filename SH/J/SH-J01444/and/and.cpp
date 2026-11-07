#include<bits/stdc++.h>
using namespace std;
int n,m,a[200020],maxn=INT_MIN;
void dfs(int l,int r,int nd,int ans){
	if(nd==0){
		maxn=max(maxn,ans);
	}
	for(int i=l;i<=r;i++){
		dfs(i+1,min(r+1,n),nd-1,ans&a[i]);
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(i+1,n-m+2,m-1,a[i]);
	}
	cout<<maxn;
	return 0;
}
