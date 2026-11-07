#include <bits/stdc++.h>
using namespace std;
long long n,a[200020],maxn=0;
void dfs(long long x,long long m,long long num){
	if(m==0){
		maxn=max(maxn,num);
		return;
	}
	for(long long i=x+1;i<=n;i++){
		dfs(i,m-1,(num==-1?a[i]:(num&a[i])));
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m;cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	dfs(0,m,-1);
	cout<<maxn;
	return 0;
}
