#include <bits/stdc++.h>
using namespace std;
const int M=1e5+10;
int n,m,maxx=INT_MIN;
int mp[M];
int a[M];
bool vis[M];
void dfs(int step){
	if(step==m+1){
		int summ=a[1];
		for(int i=2;i<=m;i++){
			summ&=a[i];
		}
		maxx=max(maxx,summ);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==1)continue;
		vis[i]=1;
		a[step]=mp[i];
		dfs(step+1);
		vis[i]=0;
		a[step]=0;
	}
}
int main(){
	freopen("and.in", "r" ,stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>mp[i];
	dfs(1);
	cout<<maxx;
	return 0;
} 
