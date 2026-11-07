#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,suf[500005],num[500005];
int root[300005],siz[500005];
vector<int> a[500005];
void dfs(int u){
	siz[u]=1;
	for(int v : a[u]){
		dfs(v);
		siz[u]+=siz[v];
	}return;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}root[num[n]]=n;
	suf[num[n]]=n;
	for(int i=n-1;i>=1;i--){
		if(suf[num[i]]==0){
			root[num[i]]=i;
			a[i+1].push_back(i);
		}else{
			a[suf[num[i]]].push_back(i);
		}suf[num[i]]=i;
	}dfs(n);
	for(int i=1;i<=m;i++){
		cout<<siz[root[i]]<<" ";
	}
	return 0;
}