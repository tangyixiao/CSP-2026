#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool v[200005];
int maxx;
void dfs(int k,int sum){
	if(k==m-1){
		maxx=max(maxx,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]==1;
			int b=sum&a[i];
			dfs(k+1,b);
			v[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		v[i]=1;
		dfs(0,a[i]);
		v[i]=0;
	}
	cout<<maxx;
	return 0;
}
