#include<bits/stdc++.h>
using namespace std;
vector<int> a[200010];
int b[200010];
int c[200010];
int n,m;
long long ans;
bool vis[200010];

void dfs(int s,int x){
	if(x>m){
		long long k=b[1];
		for(int i=1;i<=m;i++){
			k&=b[i];
		}
		ans=max(ans,k);
		return;
	}
	for(int i=1;i<=n;i++){
		if(i==s||vis[i])continue;
		b[x]=c[i];
		vis[i]=1;
		dfs(i,x+1);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		
	}
	for(int i=1;i<=n;i++){
		b[1]=c[i];
	vis[i]=1;
	dfs(i,2);
	vis[i]=0;
	} 
	
	cout<<ans;
	return 0;
} 
