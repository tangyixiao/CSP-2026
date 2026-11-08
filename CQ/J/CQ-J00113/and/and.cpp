#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],maxx=0;
void dfs(int x,int h,long long nm){
	if(h>m){
		maxx=max(maxx,nm);
		return;
	}
	for(int i=x+1;i<=n;i++){
		long long y=nm&a[i];
		if(h==1)y=a[i];
		dfs(i,h+1,y);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(0,1,0);
	cout<<maxx;
	return 0;
} 
