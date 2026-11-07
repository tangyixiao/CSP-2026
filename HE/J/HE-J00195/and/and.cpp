#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long s[N],maxx=-1;
int n,m,a[N];
vector<bool> x(N); 
void dfs(int cnt,long long ans){
	if(cnt==m){
		maxx=max(maxx,ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(cnt==0){
			x[i]=true;
			dfs(cnt+1,a[i]);
			x[i]=false;
		}else if(x[i]==false){
			x[i]=true;
			dfs(cnt+1,ans&a[i]);
			x[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<maxx;
	return 0;
}
