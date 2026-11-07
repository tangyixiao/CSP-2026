#include<bits/stdc++.h>
using namespace std;
#define N 1000020
#define int long long
#define endl "\n"
#define F first
#define S second
//#define iscc ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,m;
int a[N];
pair<int,bool> vis[N];
int ans[N];
int pai[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//system("fc test.ans test.out");
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	
	for(int i=1;i<=n;i++){
		int idx=1;
		for(int j=1;j<=m;j++){
			vis[j].F=0;
			vis[j].S=0;
			pai[j]=0;
		}
		
		for(int j=i;j<=n;j++){
			if(vis[a[j]].S==0){
				vis[a[j]].S=1;
				vis[a[j]].F=idx;
				pai[idx]=a[j];
				idx++;
			}
			else{
				int t=idx;
				for(int k=vis[a[j]].F;k<=t;k++){
					vis[pai[k]].S=0;
					vis[pai[k]].F=0;
					idx--;
				}
				vis[a[j]].F=idx-1;
				vis[a[j]].S=1;
			}
		}
		for(int j=1;j<=m;j++){
			if(vis[j].S==1) ans[j]++;
		}
	}
	
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
