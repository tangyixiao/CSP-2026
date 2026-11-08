#include <bits/stdc++.h>
using namespace std;
int a[500005],k[500005],h[500005],g[500005];
int main(){
	freopen("card.in","r",stdout);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int l=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			l=1; 
		}
	}
	if(!l){
		int u=1;
		for(int i=1;i<=m;i++){
			while(a[u]==i) u++;
			if(a[u-1]==i){
				cout<<u-1<<" ";
			}else{
				cout<<0<<" ";
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			memset(k,0,sizeof k);
			memset(h,0,sizeof h);
			for(int j=i;j<=n;j++){
				if(k[a[j]]){
					for(int o=k[a[j]];o<j;o++){
						h[o]=1;
					}
					k[a[j]]=j;
				}else{
					k[a[j]]=j;
				}
			}
			for(int j=1;j<=n;j++){
				if(!h[j]){
					g[a[j]]++;
				}
			}
//			cout<<endl;
		}
		for(int i=1;i<=m;i++){
			cout<<g[i]<<" ";
		}
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
