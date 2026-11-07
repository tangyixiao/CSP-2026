#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans=-1;
bool cmp(int q,int p){
	return q>p;
}
void dfs(int x,int i,int num){

	if(x>=m){
		ans=max(ans,num);
		return;
	}
	if(i>=n){
		return;
	}
	if(num==0){
		dfs(x+1,i+1,a[i]);
		dfs(x,i+1,0);
	} else {
		dfs(x+1,i+1,num&a[i]);
		dfs(x,i+1,num);
	}
	return;

}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	dfs(0,1,0);
	cout<<ans;
	return 0;
}
