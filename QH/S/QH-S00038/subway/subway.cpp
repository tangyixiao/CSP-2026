#include<bits/stdc++.h>
using namespace std;
const int N=5e5+705,M=505;
struct node{
	int to,z;
	bool operator>(const node& other)const{
		return z>other.z;
	}
};
vector<node> g[N];
vector<int> gg[M];
long long dist[N];
long long a[M][M];
bool st[M];
int c,n,m,d,q;
int w[M];
void dijsktra(int s){
	memset(dist,0x3f,sizeof dist);
	priority_queue<node,vector<node>,greater<node>> q;
	q.push({s,0});
	dist[s]=0;
	while(q.size()){
		node u=q.top();
		q.pop();
		int to=u.to;
		int z=u.z;
		if(dist[to]!=z) continue;
		for(node it:g[to]){
			if(dist[it.to]>z+it.z){
				dist[it.to]=z+it.z;
				q.push({it.to,dist[it.to]});
			}
		}
	}
}
int main(){
    //预计得分44
    freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	//cout<<1<<' ';
	cin>>c>>n>>m>>d>>q;
	for(int i=1;i<=m;i++) cin>>w[i];
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		int u=m+i;
		for(int j=1;j<=k;j++){
			int v,z;
			cin>>v>>z;
			//cout<<v<<z<<'\n';
			g[u].push_back({v,z});
			g[v].push_back({u,z});
		}
	}
	vector<pair<int,int>> ceshi;
	for(int i=1;i<=q;i++){
		int x,y;
		cin>>x>>y;
		//cout<<x<<' '<<y<<'\n';
		ceshi.push_back({min(x,y),max(x,y)});
		//cout<<min(x,y)<<' '<<ceshi[i-1].second<<'\n';
		st[min(x,y)]=1;
		gg[min(x,y)].push_back(max(x,y));
	}
	for(int i=1;i<=m;i++){
		if(st[i]){
			dijsktra(i);
			for(auto it:gg[i]){
				a[i][it]=dist[it];
			}
		}
	}
	for(auto it:ceshi){
        //cout<<1<<' ';
		cout<<a[it.first][it.second]+w[it.first]+w[it.second]<<'\n';
	}
	return 0;
}
/*
我们省的的dev-c++用的c++11?GOD
0 2 5 20 2
4 1 9 2 5
3 1 5 2 7 4 6
3 2 3 3 4 5 7
1 3
1 2

0 3 7 20 2
8 3 6 1 7 2 9
3 1 4 2 5 5 100
3 2 6 3 1 7 2
4 3 2 5 100 4 6 6 7
1 6
2 3

*/
