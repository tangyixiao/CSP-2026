#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005];
struct node{
	int a,b;
}arr[500005],vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i].a;
		arr[i].b=i;
	}
	for(int i=0;i<n;i++){
		int x=n,y=n;
		for(int j=0;j<n;j++)vis[j].a=0,vis[j].b=0;
		for(int j=i;j<n;j++){
			if(vis[arr[j].a].a>0&&arr[i].b<x){
				y=j+1;
				x=min(x,vis[arr[j].a].b+1);
				vis[arr[j].a].a--;
			}else{
				vis[arr[j].a].a++;
				vis[arr[j].a].b=j;
			}
		}
		for(int j=i;j<x;j++)ans[arr[j].a]++; 
		for(int j=y;j<n;j++){
			ans[arr[j].a]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}