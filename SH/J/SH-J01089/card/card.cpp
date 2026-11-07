#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],d[500005],pla[500005],ans[500005];
bool vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int o=1;o<=n;o++)
			vis[o]=false;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==true){
				for(int k=pla[a[j]];k<=j-1;k++)
					vis[a[k]]=false;
			}
			vis[a[j]]=true,pla[a[j]]=j;	
		}	
		for(int p=1;p<=m;p++)
			if(vis[p]==true) ans[p]++;
	} 
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
