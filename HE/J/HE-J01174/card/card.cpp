#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ccnt[500005];
int vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}int cnt=0;
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=0){
				for(int k=vis[a[j]];k<=j;k++){
					vis[a[k]]=0;
				}
			}
			vis[a[j]]=j;	
		}
		for(int j=1;j<=m;j++){
			if(vis[a[j]]!=0){
				ccnt[j]++;
			}
		}
	}
	ccnt[a[n]]++;
	for(int i=1;i<=m;i++){
		cout<<ccnt[i]<<" ";
	}
	return 0;
} 
