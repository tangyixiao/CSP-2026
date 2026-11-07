#include<bits/stdc++.h>
/*
pts 100
times 10:03
up_date 
- 10:12 improve the run_time
- 10:31 chenge the M_size
*/
using namespace std;
typedef long long ll;
typedef pair<int,int> pt;
const int N = 5e5 + 1000 ;
const int M = 3e5 + 1000 ;
int pos[M];
int n,m;
int a[N];
int cnt[M];
int vis[M];
int ans[M];
int nt;
void dfs(int u,int x){
	if(!vis[a[u]]){
		x+=cnt[a[u]];
		vis[a[u]]=1;
	}
	ans[a[u]]+=x;
	if(a[u]==nt)	return ;
	dfs(pos[a[u]]+1,x);
}
int main (){
//	freopen("card7.in","r",stdin);
//	freopen("card.ans","w",stdout);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;
		cnt[a[i]]++;
	}
	nt=a[n];
	for(int i=1;i<=n;i++){
		if(!vis[a[i]]){
			vis[a[i]]=1;
			dfs(i,cnt[a[i]]);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)	cout<<" ";
	}
	return 0;
}