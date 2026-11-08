#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int ans[300005],d[500005];
struct cards{
	int x;
	vector<int> v;
}c[300005];
struct node{
	int sz;
	int x;
	int nxt;
}dp[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[a[i]].x=a[i];
		c[a[i]].v.push_back(i);
		dp[i].sz=1;
	}
	dp[n].x=a[n];
	dp[n].nxt=-1;
	for(int i=n-1;i>=1;i--){
		int x=a[i];
		if(c[x].v[c[x].v.size()-1]==i){
			dp[i].x=x;
			dp[i].nxt=i+1;
			d[i+1]++;
		}
		else{
			dp[i].x=0;
			dp[i].nxt=c[x].v[c[x].v.size()-1];
			d[c[x].v[c[x].v.size()-1]]++;
		}
		//cout<<dp[i].x<<' '<<dp[i].nxt<<'\n';
	}
	queue<pair<int,int>> q;
	for(int i=1;i<=n;i++){
		if(!d[i]){
			ans[dp[i].x]++;
			q.push({i,1});
			dp[i].sz=0;
			//cout<<'|'<<dp[i].x<<' '<<ans[dp[i].x]<<'\n';
		}
	}
	while(!q.empty()){
		pair<int,int> u=q.front();
		q.pop();
		int v=dp[u.first].nxt;
		if(v!=-1){
			ans[dp[v].x]+=u.second+dp[v].sz;
			q.push({v,u.second+dp[v].sz});
			dp[v].sz=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
