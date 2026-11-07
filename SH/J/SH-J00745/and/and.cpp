#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],m;
int vis[500005];
int sum[500005]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				vis[a[j]]=j;
				sum[a[j]]++;
			}
			else{
				for(int z=vis[a[j]];z<j;z++){
					if(vis[a[z]])
					sum[a[z]]--;
					vis[a[z]]=0;
					
				}
				vis[a[j]]=j;
				sum[a[j]]++;
			}
		}
		for(int j=i;j<=m;j++){
			vis[j]=0;
			
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<' ';
	}
	return 0;
}
