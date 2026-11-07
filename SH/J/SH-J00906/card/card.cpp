#include<bits/stdc++.h>
using namespace std;
int cnt[300010];
int arr[500010];
vector<int> graph[300010];
int n,m;
void dfs(int idx){
	if(idx>=n){
		return;
	}
	int cur=arr[idx];
	int curl=graph[cur].size()-1;
	int x=graph[cur][curl];
	cnt[cur]++;
	dfs(x+1);
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i]=x;
		graph[x].push_back(i);
	}
	for(int i=0;i<n;i++){
		dfs(i);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}//Trick||Treat!
