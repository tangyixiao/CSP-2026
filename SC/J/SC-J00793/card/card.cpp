#include<bits/stdc++.h>
using namespace std;
int vis[300005];
int dis[300005];
int a[500005];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		vis[a[i]]++; 
		vis[a[i]]%=2;
	}
	for(int i=1;i<=m;i++){
		dis[i]=vis[i];
	}	
	for(int i=2;i<=n;i++){
		vis[a[i-1]]--;
		vis[a[i-1]]=(vis[a[i-1]]+2)%2;
		for(int j=a[i-1];j<=m;j++){
			dis[j]+=vis[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<dis[i]<<" ";
	}	
	return 0;
} 