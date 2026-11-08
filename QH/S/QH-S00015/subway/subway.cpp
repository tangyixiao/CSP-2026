#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N=5e5+10;
vector<pair< int ,int> > g[N];
int zk[N];
int dis[N];
int vis[N];
int c,n,m,q,d;
void dij(int s){
	memset(dis,0x3f,sizeof(dis));
	memset(vis,0x3f,sizeof(vis));
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
	q.push({s,zk[s]});
	while(!q.empty()){
		int near_nod=q.top().first;
		if(vis[near_nod]) continue;
		vis[near_nod]=1;
		for(pair<int,int>_ : g[near_nod]){
			int to=_.first;
			int w=_.second;
			if(dis[to]>dis[near_nod]+w){
				dis[to]=dis[near_nod]+w;
				q.push({to,dis[to]});
			}
		}
	}
}
signed main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	cin>>c>>n>>m>>d>>q;
	for(int i=1;i<=m;i++){
		int dk;
		cin>>dk;
		zk[i]=dk;
	}
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		vector<pair<int,int> > l;
		for(int j=1;j<=k;j++){
			int ai,ti;
			cin>>ai>>ti;
			l.push_back({ai,ti}) ;
		}
		for(int j=0;j<k;j++){
			for(int t=0;t<k;t++){
				if(j==t) continue;
				g[l[j].first].push_back({l[t].first,l[j].second});
			}
		}
	}
	while(q--){
		int s,e;
		cin>>s>>e;
		dij(s);
		cout<<dis[e]+zk[e]<<endl;
	}
	return 0;
}
