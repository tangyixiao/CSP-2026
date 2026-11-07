#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N=1e5+10;
vector<PII> g[N];
int dist[N];
bool flag[N];
int n,m;
int Dijstua(){
	memset(dist,0x3f,sizeof(dist));
	priory_queue<PII,vector<PII>,graeter<int>> q;
	q.push({0,1});
	dist[1]=0;
	while(!q.empty()){
		PII t=q.top();
		q.pop();
		int vis=t.second;
		if(flag[vis]==1) continue;
		flag[vis]=1;
		for(int i=0;i<(int)g[vis].size();i++){
			int j=g[vis][i].first,w=g[vis][i].second;
			if(dist[j]>dist[vis]+w){
				dist[j]=dist[vis]+w;
				q.push({dist[j],j});
			}
		}
	}
	if(dist[n]==0x3f3f3f3f) return -1;
	else return dist[n];
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		g[x].push_back({y,z});
	}
	printf("%d",Dijstua());
}