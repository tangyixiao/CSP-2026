#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool vis[200005];
long long maxx=-1000000000;
void dfs(int wei,long long num){
	if(wei==m){
		maxx=max(maxx,num);
	}if(num<maxx)return;
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(wei+1,num&a[i]);
			vis[i]=0;
		}
	} 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
		vis[i]=0;
	}cout<<maxx;
	return 0;
}
