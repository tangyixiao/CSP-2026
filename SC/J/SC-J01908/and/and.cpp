#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;


int n,m;
int a[N],ans,v[N];

void dfs(int u,int cnt){
	
	if(u>n){
		if(cnt==m){
			int tot=v[1];
			for(int i=2;i<=cnt;i++){
				tot=tot&v[i];
			}
			ans=max(ans,tot);
		}
		return;
	}
	

	v[cnt+1]=a[u];
	dfs(u+1,cnt+1);
	v[cnt+1]=0;
	
	dfs(u+1,cnt);
	
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	
	dfs(1,0);
	
	cout<<ans;
	
	
	return 0;
}