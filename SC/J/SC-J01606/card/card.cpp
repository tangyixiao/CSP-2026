#include<bits/stdc++.h>
using namespace std;
const int N=5e+5,M=3e+5;
int a[N+10];
int hsh[M+10];
int ls[M+10];
int z[N+10];
int tt=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=1;i<=n;i++){
		memset(ls,0,sizeof(ls));
		memset(z,0,sizeof(z));
		tt=0;
		for(int j=i;j<=n;j++){
			if(ls[a[j]]==0){
				++tt;
				ls[a[j]]=tt;
				z[tt]=a[j];
			}
			else{
				int l=ls[a[j]];
				while(tt>=l){
					ls[z[tt]]=0;
					z[tt]=0;
					tt--;
				}
				z[++tt]=a[j];
				ls[a[j]]=tt;
			}
		}
		for(int j=1;j<=tt;j++) hsh[z[j]]++;
	}
	
	for(int i=1;i<=m;i++) cout<<hsh[i]<<" ";

	return 0;
}
