#include <bits/stdc++.h>
using namespace std;
int n,m;
int w[25],v[25];
int ans=0;
void dfs(int i,int nowW,int nowV){
	if(i>n){
		ans=max(ans,nowV);
		return;
	}
	dfs(i+1,nowW,nowV);
	if(nowW+w[i]<=m){
		dfs(i+1,nowW+w[i],nowV+v[i]);	
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	dfs(1,0,0);
	cout<<ans;

	
	
	return 0;
}
