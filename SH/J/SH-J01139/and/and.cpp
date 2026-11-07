#include<bits/stdc++.h>
using namespace std;
long long box[200005],vis[200005],a[200005];
long long n,m,maxn;
void dfs(long long x,long long index){
	if(x==m+1){
		long long a=box[1];
		for(int i=2;i<=m;i++)   a&=box[i];
		maxn=max(maxn,a);   
		return;
	}
	for(long long i=index;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			box[x]=a[i];
			dfs(x+1,i+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)   cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(n==m){
		long long t=box[1];
		for(long long i=2;i<=n;i++)   t&=box[i];
		cout<<t;
		return 0;
	}
	dfs(1,1);
	cout<<maxn;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
