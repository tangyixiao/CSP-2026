#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long last[500005],v[500005],cnt[500005],u[500005];
vector<int> tr[500005];
void dfs(int x,int f){
	for(int j=0; j<(int)(tr[x].size()); j++){
		int i=tr[x][j];
		if(i!=f){
			dfs(i,x);
			u[x]+=u[i];
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>v[i];
		u[v[i]]+=1;
		//back[i]=last[v[i]];
		last[v[i]]=i;
	}for(int c=1; c<=m; c++){
		int p=last[c];
		tr[c].push_back(v[last[c]+1]);tr[v[last[c]+1]].push_back(c);
		/*while(p<=n){
			cnt[v[p]]+=u[c];
			p=last[v[p]]+1;
		}*/
	}dfs(v[n],0);
	for(int i=1; i<=m; i++){
		cout<<u[i]<<' ';
	}
	return 0;
} 
