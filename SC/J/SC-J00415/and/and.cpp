#include<bits/stdc++.h>
using namespace std;
long long n,m,mx=-1e9,s1,s2;
long long a[200010];
void dfs(long long ds,long long k,long long f){
	if(ds>m){
		mx=max(mx,f);
	}
	for(int i=k+1;i<=n;i++){
		dfs(ds+1,i,f&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	dfs(1,0,((1ll<<62)-1)*2+1);
	cout<<mx; 
	return 0;
} 