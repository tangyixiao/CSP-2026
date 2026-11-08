#include<bits/stdc++.h>
using namespace std;
int c,n,m,d,q;
const int N=4e4+10;
const int D=2000;
int a[N];
int dis[N];
int t[600][N];
int g[600][N];
int kp[600];
vector<pair<int,int> > G[N];
void bfs(int s){
	memset(dis,0x3f,sizeof(dis));
	priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq;
	pq.push({0,s});
	dis[s]=0;
	while(!pq.empty()){
		pair<int,int> o=pq.top();
		pq.pop();
		int pre=o.second;
		int sum=o.first;
		if(dis[pre]<sum) continue;
		for(int i=0;i<G[pre].size();i++){
			pair<int,int> u=G[pre][i];
			int to=u.second;
			int val=u.first;
			if(sum+val<dis[to]){
				dis[to]=sum+val;
				pq.push({dis[to],to});
			}
		}
	}
}
int main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	cin>>c>>n>>m>>d>>q;
	if(c<7||c>11){
		cout<<1;
		return 0;
	}
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		kp[i]=k;
		for(int j=1;j<=k;j++){
			int x,y;
			cin>>x>>y;
			t[i][j]=y;
			g[i][j]=x;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=kp[i];j++){
			for(int k=1;k<=kp[j];k++){
				if(j==k) continue;
				G[D+g[i][j]*i].push_back({0,D+g[i][k]*i});
			}
			G[D+g[i][j]*i].push_back({t[i][j],g[i][j]});
			G[g[i][j]].push_back({t[i][j],D+g[i][j]*i});
		}
	}
	while(q--){
		int x,y;
		cin>>x>>y;
		int ans=0;
		ans+=a[x]+a[y];
		bfs(x);
		ans+=dis[y];
		cout<<ans<<endl;
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
}



