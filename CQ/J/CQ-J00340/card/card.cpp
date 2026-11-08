#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
int n,m;
const int N=5e5+10;
int a[N];
struct node{
	bool flag=false;
	int id=0;
};
node vis[N];
int ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			vis[j].flag=false;
			vis[j].id=0;
		}
		for(int j=i;j<=n;j++){
			if(vis[a[j]].flag==true){
			   for(int k=vis[a[j]].id;k<j;k++)vis[a[k]].flag=false;
			   	    vis[a[j]].flag=true;
			   	    vis[a[j]].id=j;
			}
			else{
				vis[a[j]].flag=true;
				vis[a[j]].id=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(vis[j].flag)ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
    return 0;
}
