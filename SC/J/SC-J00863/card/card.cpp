#include<bits/stdc++.h>
using namespace std;
int n,m,a[500099],vis[500099],b[500099],ans[500099];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x=1;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			b[j]=a[j];
			vis[j]=0;
		
		}
		for(int j=1;j<x;j++){
			b[j]=0;
		}
		for(int z=x;z<=n;z++){
			if(vis[b[z]]==1){
			
				for(int j=z-1;j>=1;j--){
					if(b[j]==b[z]){
						b[j]=0;
						break;
					}
					vis[b[j]]=0;
					b[j]=0;
				}
				
			}
			else{
				vis[b[z]]=1;
			}
		}
		sort(b+1,b+1+n,cmp);
		for(int j=1;j<=m;j++){
		
			ans[b[j]]++;
		}
	
		x++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
	
	
	
	return 0;
} 