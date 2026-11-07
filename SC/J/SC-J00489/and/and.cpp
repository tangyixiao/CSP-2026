#include<bits/stdc++.h>
using namespace std;
const int MAN=2e5+10;
int a[MAN];
bool f[MAN];
int n,m,ans=-1e9;

void dfs(int x,int k){ 
	if(k==m){
		ans=max(ans,x);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!f[i]){
			f[i]=1;
			if(k==-1) dfs(a[i],1);
			else dfs(x&a[i],k+1);
		}
		f[i]=0;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,-1);
	cout<<ans;

	return 0;
}
