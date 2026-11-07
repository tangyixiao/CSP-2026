#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2005;
const int M=4e6+5; 
int n,m,sum=0;
ll a[N],b[N];
int ans[M][10];
bool vis[N]={0};
void dfs(int x,int s){
	b[s]=x;
	vis[x]=1;
	if(s==m){
		sum++;
		for(int i=1;i<=m;i++)ans[sum][i]=b[i];	
		vis[x]=0;
		return;
	}
	for(int i=1;i<=n;i++)if(!vis[i])dfs(i,s+1);
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		dfs(i,1);	
	}
	int mx=0;
	for(int i=1;i<=sum;i++){
		int x=a[ans[i][1]];
		for(int j=2;j<=m;j++)x=(x&a[ans[i][j]]);
		mx=max(x,mx);
	}
	cout<<mx;
//	for(int i=1;i<=sum;i++){
//		for(int j=1;j<=m;j++){
//			cout<<ans[i][j];
//		}
//		cout<<"\n";
//	}
	return 0;
}
