#include<bits/stdc++.h>
using namespace std;
int MAX[500050];
int val[500050];
int ans[500050];
bool vis[500050];
vector<int> v[500050];
void DFS(int p) {
	vis[p]=true;
	for(int i=0; i<v[p].size(); i++) {
		if(!vis[v[p][i]]) {
			DFS(v[p][i]);
			ans[p]+=ans[v[p][i]];
		}
	}
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>val[i];
		MAX[val[i]]=max(MAX[val[i]],i);
	}
	for(int i=1; i<n; i++) {
		if(MAX[val[i]]<i+1) {
			v[val[i]].push_back(val[i+1]);
			v[val[i+1]].push_back(val[i]);
		}
	}
	for(int i=1; i<=n; i++) {
		ans[val[i]]++;
	}
	DFS(val[n]);
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	//system("FC.exe XXX.out XXX.ans");
	return 0;
}

