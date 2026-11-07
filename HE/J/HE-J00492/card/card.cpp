#include<bits/stdc++.h>
using namespace std;
struct node{
	int id;
	int x;
};
node a[500050];
int ans[300050];
int n,m;
void f(int st){
	int vis[50050]={};
	for(int i=st;i<=n;i++){
		int t=a[i].x;
		if(vis[t]!=0){
			for(int j=vis[t]+1;j<i;j++){
				vis[a[j].x]=0;
			}
		}
		else{
			vis[t]=i;
		}
	}
	for(int i=1;i<=m;i++){
		if(vis[i]!=0){
			ans[i]++;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].id=i;	
	}
	for(int i=1;i<=n;i++){
		f(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
