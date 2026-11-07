#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[20005];
int maxx=-1;
void dfs(int sum,int t,int id){
	if(t==m){
		maxx=max(maxx,sum);
		return;
	}
	if(id>n)return;
	dfs((sum&a[id+1]),t+1,id+1);
	dfs(sum,t,id+1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		dfs(a[i],1,i);
	}cout<<maxx;
	return 0;
} 
