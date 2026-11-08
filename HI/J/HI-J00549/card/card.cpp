#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],j[100010];
struct node{
	int cui,wz;
}g[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	
	for(int u=1;u<=n;u++){
		int b[100010];
		for(int i=u;i<=n;i++){
			b[i]=a[i];
		}
		for(int i=u+1;i<=n;i++){
			if(g[b[i]].cui==0){
				g[b[i]].cui=1;
				g[b[i]].wz=i;
			}
			else{
			
				for(int k=i-1;k>=g[b[i]].wz;k--){
					b[k]=0;
					}
				}
				}
		for(int i=1;i<=n;i++){
			int y;
			y=b[i];
			j[y]++;
		}
		for(int i=1;i<=n;i++){
			b[i]=0;
			g[i].cui=0;
			g[i].wz=0;
		}
	}

	
	for(int i=1;i<=m;i++){
		cout<<j[i]<<' ';
	}
	return 0;
}
