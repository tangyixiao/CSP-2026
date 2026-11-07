#include<bits/stdc++.h>
using namespace std;
long long n,m,card[500005],vis[500005],sum[500005],dire[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++)
	cin>>card[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[card[j]]==0)
			vis[card[j]]=1,dire[card[j]]=j;
			else{
				for(int k=dire[card[j]];k<j;k++)
				vis[card[k]]=0;
				vis[card[j]]=1,dire[card[j]]=j;
			}
		}
		for(int j=1;j<=m;j++)
		if(vis[j]==1)
		sum[j]++,vis[j]=0;
	}
	for(int i=1;i<=m;i++)
	printf("%d"" ",sum[i]);
}
