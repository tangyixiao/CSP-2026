#include<bits/stdc++.h>
using namespace std;
int m,n,a[500005],nt[500005],vis[500005],da[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int k=1;k<=n;++k){
		for (int i=k;i<=n;++i){
			if(vis[a[i]]!=1){
				vis[a[i]]=1;
				nt[i]=a[i];
			}
			else{
				int j=i;
				while(a[j]!=a[i]&&j>=n){
					j--;
					vis[nt[j]]=0;
				}
			}
		}
		for (int i=1;i<=n;++i){
			if(vis[a[i]]){
				da[a[i]]++;
			}
		}
	}
	for(int i=1;i<=n;++i){
		cout<<da[a[i]];
	}
	return 0;
}
