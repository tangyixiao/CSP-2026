#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],cnt=0;
bool vis[200005];
void dfs(int x){
	if(x>m){
		int num=a[b[1]];
		for(int i=2;i<=m;i++){
			num=num&a[b[i]];
		}
		cnt=max(cnt,num);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]!=true){
			vis[i]=true;
			b[x]=i;
			dfs(++x);
			x--;
			vis[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<cnt;
	return 0;
}
