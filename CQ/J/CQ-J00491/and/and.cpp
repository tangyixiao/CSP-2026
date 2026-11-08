#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],m,da,vis[100005],mx,k;
void dfs(long long x,long long z){
	if(x==m+1)da=max(da,z);
	for(long long i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1,dfs(x+1,z&a[i]),vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(mx<a[i]){
			mx=a[i],k=i;
		}
	}
	if(n*m<=4005){
		dfs(1,(1<<31)-1);
		cout<<da;
		return 0;
	}
	vis[k]=1,da=mx;
	for(long long i=2;i<=m;i++){
		mx=0,k=0;
		for(long long j=1;j<=n;j++){
			if(mx<a[j]&da&&vis[j]==0){
				mx=a[j]&da,k=j;
			}
		}
		vis[k]=1,da=mx;
	}
	cout<<da;
	return 0;
}

