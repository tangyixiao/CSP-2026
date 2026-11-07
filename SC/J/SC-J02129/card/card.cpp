#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5005],b[5005],ans[3005];
int sol(int x){
	for(int u=0;u<n;u++){
		if(b[u]==x) return u;
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int w=0;
		for(int j=i;j<n;j++){
			if(sol(a[j])==-1){
				b[w]=a[j];
				w++;
			}
			else {
				for(int k=sol(a[j]);k<n;k++){
					b[k]=-1;
				}
				b[w]=a[j];
				w++;
			}
		}
		for(int z=0;z<n;z++){
			if(b[z]>=1&&b[z]<=m) ans[b[z]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}