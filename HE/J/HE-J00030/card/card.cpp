#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],ans[300010];
int flag[300010];
void dfs(int x){
	if(x==n){
		flag[a[x]]=x;
		ans[a[x]]++;
		return ;
	}
	if(flag[a[x]]){
		int y=flag[a[x]];
		flag[a[x]]=0;
		dfs(y);
	}else{
		flag[a[x]]=x;
		dfs(x+1);
		ans[a[x]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		dfs(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
//10 3
//3 1 2 1 3 2 3 1 2 1
