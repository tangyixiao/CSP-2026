#include<bits/stdc++.h>
using namespace std;
int a[200001],b[200001],vis[200001]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(a[j]==a[i]){
				for(int p=j;p<i;p++){
					vis[p]=1; 
				} 
			}
		}
	}	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j]==i){
				b[i]++;
			}
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
}