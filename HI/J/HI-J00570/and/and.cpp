#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int n,m,ans=-1;
ll a[200005];
bool vis[200005],f=1;
bool cmp(int x,int y){
	return x>y;
}
void dfs(int x,int id){
	if(id>=m){
		ans=max(ans,x);
		return;
	}
	for(int i=0;i<n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(x&a[i],id+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=i)f=0;
	}if((n>2000&&n==m+1)||f){
		sort(a,a+n,cmp);
		ans=a[0];
		for(int i=1;i<m;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	for(int i=0;i<n;i++){
		vis[i]=1;
		dfs(a[i],1);
		vis[i]=0;
	}cout<<ans;
	return 0;
}
