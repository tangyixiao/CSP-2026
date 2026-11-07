#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int v[N];
int mx=-1;
void dfs(int s,int sum){
	if(s>m){
		mx=max(mx,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if (!v[i]){
			v[i]=1;
			dfs(s+1,sum&a[i]);
			v[i]=0;
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
	for(int i=1;i<=n;i++){
		dfs(1,a[i]);
	}
	cout<<mx;
	return 0;
}

