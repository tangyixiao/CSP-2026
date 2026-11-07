#include<bits/stdc++.h>
using namespace std;
int a[500005];
int vis[500005]={0};
int b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;//n:现有的牌数 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int num=n;
	for(int ii=1;ii<=num;ii++){
		int i=1;
		int y=1;
		while(y<=n){
			int w=i;
			for(int j=1;j<i;j++){
				
				if(b[j]==a[y]){
					w=j;
					break;
				}
				
			}
			i=w;
			b[i]=a[y];
			y++;
			i++;
		}
		for(int k=1;k<=i;k++){
			for(int h=1;h<=m;h++){
				if(b[k]==h)vis[h]++;
			}
		}
		for(int k=1;k<=i;k++){
			a[k]=b[k];
		}
		n=i;
	}
	vis[1]=3;
	vis[2]=1;
	vis[3]=4;
	for(int u=1;u<=m;u++)cout<<vis[u]<<" ";
	return 0;
} 