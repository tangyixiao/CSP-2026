#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
long long n,m,a[N],_[N],cnt[N],vis[N],rd[N];
vector<int> g[N];
queue<int> q;
void topsort(){
	for(int i=1;i<=m;i++){
		if(rd[i] == 0) q.push(i);
	}
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cnt[x] += _[x];
		for(int i=0;i<g[x].size();i++){
			int y = g[x][i];
			rd[y]--;
			cnt[y] += cnt[x];
			if(rd[y] == 0) q.push(y);
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[a[i]] = i;
		_[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		int x = i, y = a[vis[i]+1];
		if(vis[i]+1 > n) continue;
		rd[y]++;
		g[x].push_back(y);
	}
	topsort();
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
/*
100pts
O(n+m)
31944KB
*/
