#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
struct node{
	int x,id;
} vis[500005];
int a[500005],cnt[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]].x==1){
				for(int k=vis[a[j]].id;k<j;k++){
					vis[a[k]].x=0;
//					cout<<vis[a[j]].id<<" ";
				}
//				cout<<endl;
			}
			vis[a[j]].x=1;
			vis[a[j]].id=j;
		}
		for(int j=1;j<=m;j++){
			cnt[j]+=vis[j].x;
//			cout<<vis[j].x<<" ";
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}