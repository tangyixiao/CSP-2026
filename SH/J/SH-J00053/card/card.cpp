#include<bits/stdc++.h>
using namespace std;
int a[500005],vis[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				int flag=0;
				for(int k=i;k<j;k++){
					if(a[k]==a[j]){
						flag=k;
						break;
					}
				}
				for(int k=flag;k<j;k++){
					vis[a[k]]=0;
				}
				for(int k=i;k<flag;k++){
					vis[a[k]]=1;
				}
			}
			vis[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(vis[j]){
				ans[j]++;
			}
		}
		for(int j=1;j<=m;j++){
			vis[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
