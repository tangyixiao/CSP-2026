#include<bits/stdc++.h>
using namespace std;
/*
sample 1:
1 1
 2
   3
sample 2:
 1 1   1 1
  2  2  2
3   3 3
i->lst[a[i]]+1
思考一下，发现是树形结构，ans[i]=\sum{if a[j]==i,add size[j]} 
*/
int n,m,a[500001],lst[300001];
vector<int>e[500010];
int sz[500010],ans[300001];
void dfs(int p){
	sz[p]=1;
	for(vector<int>::iterator it=e[p].begin();it!=e[p].end();it++){
		int t=*it;
		dfs(t);
		sz[p]+=sz[t];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
//	freopen("card.in","w",stdin);
//	freopen("card.out","r",stdout);
//	freopen("card.in","w",stdout);
//	freopen("card.out","r",stdin);
//	freopen("card.in","r",stdout);
//	freopen("card.out","w",stdin);
//	feropen
//	freoprn
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],lst[a[i]]=i;
	for(int i=1;i<=n;i++)e[lst[a[i]]+1].push_back(i);
	dfs(n+1);
	for(int i=1;i<=n;i++)ans[a[i]]+=sz[i];
	for(int i=1;i<=m;i++)cout<<ans[i]<<(i==m?"":" ");
	return 0;
}/*
原来咽回去的泪 才能淹没了脆弱 
你发誓更勇敢 一生与梦相拥
还在等什么啊 要逆风不退啊
这一路光景 有你在身旁 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  aaaaaaaa
*/
