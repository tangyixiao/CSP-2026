//T4 - card
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
const int N = 5e5 + 5;
const int M = 3e5 + 5;
int n,m,a[N],lst[M],r_deg[M];
int cnt[M];
vector<int> g[M];
queue<int> que;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		lst[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		cnt[a[i]]++;
	}
	for(int i=n;i>=1;i--){
		if(i==lst[a[i]]){
			if(i<n){
				g[a[i]].push_back(a[i+1]);
				r_deg[a[i+1]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		if(r_deg[i]==0){
			que.push(i);
		}
	}
	while(!que.empty()){
		int u=que.front();que.pop(); 
		for(unsigned int i=0;i<g[u].size();i++){
			int v=g[u][i];
			r_deg[v]--;
			cnt[v]+=cnt[u];
			if(r_deg[v]==0){
				que.push(v);
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d",cnt[i]);
		if(i<m){
			printf(" ");
		}
	}
	printf("\n");
	fclose(stdin);fclose(stdout);
	return 0;
}
