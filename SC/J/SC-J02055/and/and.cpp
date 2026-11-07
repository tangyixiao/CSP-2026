#include<bits/stdc++.h>
using namespace std;
int ayyt[200005],byyt[200005],m,n;
int anshh=0;
void dfs(int dijige,int he,int xvhao){
	if(dijige==m){
		anshh=max(anshh,he);
	}
	for(int i=xvhao+1;i<=n;i++){
		dfs(dijige+1,he&ayyt[i],i);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>ayyt[i];
	for(int i=1;i<=n-m+1;i++){
		dfs(1,ayyt[i],i);
	}
	cout<<anshh;
	return 0;
}