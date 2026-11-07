#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long a[1000]={0},d[1000]={0},p[1000]={0},n,m;//x为循环计数 
	cin>>n>>m;//d为桌上的牌  a为牌序   p为桶 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			d[j]=a[j];
			for(int x=0;x<j;x++){
				if(d[x]==d[j]){
					for(int o=x;o<j;i++){
					    d[o]=0;
					}
				}
			}
		}
		for(int u=0;u<n;u++){
			if(d[u]>0){
				p[d[u]]++;
			}
		}
		for(int r=0;r<n;i++){
			d[r]=0;
		}
	}
	for(int i=0;i<=m;i++){
		if(p[i]>0){
			cout<<p[i]<<" ";
		}
	}
}
