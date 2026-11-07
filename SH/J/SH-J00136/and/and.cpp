#include<bits/stdc++.h>
using namespace std;
int maxa=0;
int m,n;
int a[200009];
int t[200009];
int flag[200009];
void dfs(int p){
	if(p==m+1){
		int ans=t[1];
		for(int i=2;i<=m;i++){
			ans=ans&t[i];
		}
		maxa=max(maxa,ans);
	}
	for(int i=1;i<=n;i++){
		if(flag[i]==0){
			flag[i]=1;
			t[p]=a[i];
			dfs(p+1);
			flag[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		flag[i]=0;
	}
	dfs(1);
	cout<<maxa;
	return 0;
}
