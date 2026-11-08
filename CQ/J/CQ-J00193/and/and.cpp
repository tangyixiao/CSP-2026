#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1;
void dfs(int cnt,int t,int idx){
	if(t<=ans){
		return;
	}
	if(cnt==m){
		ans=max(ans,t);
		return;
	}
	for(int j=idx+1;j<n;j++){
		dfs(cnt+1,t&a[j],j);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-m;i++){
		dfs(1,a[i],i);
	}
	cout<<ans<<endl;
	return 0;
}
