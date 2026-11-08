#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],b[200001],ans,maxn=0;
void dfs(int x,int y){
	if(x==m){
		maxn=ans>=maxn ? ans:maxn;
		return ;
	}
	for(int i=1;i<=n;i++){
		if(x==1){
			ans=b[i];
		}else if(b[i]==-1){
			return ;
		}else{
			ans=ans&b[i];
		}
		b[i]=-1;
		dfs(++x,i);
		b[i]=a[i];
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	dfs(1,0);
	cout<<maxn;
	return 0;
}

