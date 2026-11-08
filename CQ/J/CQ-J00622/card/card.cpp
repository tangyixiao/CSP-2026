#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int ans[300005],d[500005];
struct cards{
	int x;
	vector<int>v;
}c[300005];
struct node{
	int sz,x,nxt;
}dp[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
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
		}else{
			dp[i].x=0;
			dp[i].nxt=c[x].v[c[x].v.size()]
		}
	}
	queue<pair<int,int>>q;
	while(!q.empty()){
		
	}
	printf("%d\n",ans);
	return 0;
}
