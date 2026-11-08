#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace Quirrel{
//input
int n,m,a[500100];
//ne
int mp[300100],lst[500100];
//graph
int sz[500100];
vector<int>g[500100];
//output
int ans[300100];
void dfs(int x){
	int y;sz[x]=1;
	for(int i=0;i<g[x].size();i++){
		y=g[x][i];dfs(y);sz[x]+=sz[y];
	}
	ans[a[x]]+=sz[x];
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!mp[a[i]])mp[a[i]]=i;
		lst[i]=mp[a[i]];
	}
	for(int i=n;i>=1;i--){
		g[lst[i]+1].push_back(i);
	}
	dfs(n+1);
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
//
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Quirrel::main();
    return 0;
}
/*
有点意思但不多
想了一堆假算
差点就AK不了了 
第一张牌到同点数下的最后一张牌都会被收 
明白这个就行了

感觉这场不值这么多钱啊 
算了
证书拿到就行了

Even the darkest night will end and the sun will rise. 
*/
