#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],b[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int res[100010],sum[100010];
		bool vis[100010];
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=1){
				res[j]=a[j];
				vis[a[j]]=1;
				sum[a[j]]=j;
			}else{
				for(int k=sum[a[j]];k<=j;k++){
					res[k]=0;
					vis[k]=0;
					sum[k]=0;
				}
				sum[a[j]]=j;
				res[j]=a[j];
				vis[a[j]]=1;
			}
		}
		for(int j=1;j<=n;j++)b[res[j]]+=1;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
}
