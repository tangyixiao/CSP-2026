#include<bits/stdc++.h>
using namespace std;
int n,m,f[500009],g[500009],end,cnt[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		g[i]=f[i];}
	end=n+1;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<end;k++){
				if(g[k]==f[j]){
					end=k;
					break;}}
			g[++end]=f[j];}
		for(int j=1;j<end;j++)	cnt[g[j]]++;}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
} 

