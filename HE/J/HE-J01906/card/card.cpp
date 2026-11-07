#include<bits/stdc++.h>
using namespace std;
int a[500001],f[300001],k[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,h=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(n--){
		memset(k,0,sizeof k);
		for(int i=h;i<=n;i++){
			k[i]=a[i-h+1];
			for(int j=h;j<=i-1;j++) 
			    if(k[j]==a[i-h+1]) {
				    for(int z=j;z<=i-1;z++) k[z]=0;
				}
		}
		for(int i=h;i<=n;i++) 
		    if(k[i]!=0) f[k[i]]++;
		h++;
	}
	for(int i=1;i<=m;i++) cout<<f[i]<<' ';
	return 0;
} 

