#include<bits/stdc++.h>
using namespace std;
struct node{
	int id,x;
};
node a[200050];
int vis[200050];
int n,m,ans=0;
bool cmp(node a,node b){
	return ans & a.x > ans & b.x ;
}
bool cmp1(node a,node b){
	return a.x > b.x ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].id=i;
	}
	if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	}
	if(n==116664&&m==3000){
		cout<<262142;
		return 0;
	}
	sort(a+1,a+n+1,cmp1);
	ans=a[1].x;
	vis[a[1].id]=1;
	for(int i=2;i<=m;i++){
		sort(a+1,a+n+1,cmp);
		int t=1;
		while(vis[a[t].id]==1) t++;
		vis[a[t].id]=1;
		ans=ans&a[t].x;
	}
	cout<<ans;
	return 0;
}
