#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int ans=0;
void dfs(vector<int>& a,int c,int st,int m,int s){
	if(c==m){
		ans=max(ans,s);
		return;
	}
	for(int i=st;i<a.size();++i){
		if(c==0) s=a[i];
		int ns=s&a[i];
		dfs(a,c+1,i+1,m,ns);
	} 
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;++i) cin>>a[i];
	dfs(a,0,0,m,0);
	cout<<ans;
	return 0;
}
