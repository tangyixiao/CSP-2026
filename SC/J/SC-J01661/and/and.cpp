#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
bool vis[200005][200005];
long long ans;
struct node{
	int c,s;
	long long v;
};
queue<node> q;
void bfs(){
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.s==0){
			ans=max(ans,t.v);
			continue;
		}
		for(int i=1;i<=n;i++){
			if(vis[t.c][i]==0){
				vis[t.c][i]=1;
				q.push({t.c+1,t.v&a[i]});
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();cout.tie();
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	q.push({1,1,m});
	bfs();
	cout<<ans;
	return 0;
}