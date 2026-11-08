#include<bits/stdc++.h>
using namespace std;
int n,m,mx;
int a[211111],d[211111];
bool f[211111];
void dfs(int b){
	if(b==m){
		int sum=d[1];
		if(m!=1){
			for(int i=1;i<m;i++){
				sum=sum&d[i+1];
			}
		}
		mx=max(mx,sum);
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0){
			d[b]=a[i];
			f[b]=1;
			dfs(b+1);
			f[b]=0;
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
	dfs(1);
	cout<<mx;
	return 0;
}
