#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5,M=3e5+5;
int n,m,a[N];
int s[M],x[M];
vector<int> e[N];
void dfs(int u){
	for(int v:e[u]){
		dfs(v);
		x[u]+=x[v];
	}
}
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	reverse(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		s[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		x[s[a[i]]]++;
		if(s[a[i]]==i){
			e[s[a[i-1]]].push_back(i);
		}
	}
	dfs(0);
	for(int i=1;i<=m;i++){
		cout<<x[s[i]]<<" \n"[i==m];
	}
	return 0;
}
