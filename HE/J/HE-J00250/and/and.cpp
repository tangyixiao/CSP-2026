#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
int n,m,ans;
int a[N];
void dfs(int k,int i,int sum,bool fl) {
	if(k==m) {
		ans=max(ans,sum);
		return;
	}
	if(i==n+1 || n-i+1<m-k) return;
	if(!fl) {
		dfs(k+1,i+1,a[i],true);
	} else {
		dfs(k+1,i+1,sum&a[i],fl);
	}
	dfs(k,i+1,sum,fl);
}
int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	dfs(0,1,0,false);
	cout <<ans<<endl;
	for(int i=1; i<=n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
