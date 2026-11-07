#include<bits/stdc++.h>
using namespace std;

long long a[200005],n,m,ans;
bool xingzhiA=1,xingzhiB,f[200005];

void dfs(long long depth,long long value){
	if(depth==m){
		ans=max(ans,value);
		return;
	}
	for(int i=1;i<=n;i++){
		if(f[i]){
			continue;
		}
		f[i]=1;
		dfs(depth+1,(value&a[i]));
		f[i]=0;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==(n&((~n)+1))){
		ans=n-m;
		xingzhiB=1;
	}
	cin>>a[1];
	if(m==n) ans=a[1];
	if(m==1) ans=max(ans,a[1]);
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(m==1) ans=max(ans,a[i]);
		if(m==n) ans=(ans&a[i]);
		if(a[i]+1!=(a[i]+1&((~(a[i]+1))+1))){
			xingzhiA=0;
		}
	}
	if(xingzhiB){
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<ans;
		return 0;
	}
	if(m==n){
		cout<<ans;
		return 0;
	}
	if(xingzhiA){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n;i++){
		f[i]=1;
		dfs(1,a[i]);
		f[i]=0;
	}
	cout<<ans;
	return 0;
} 
