#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[500005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n]){
			b[a[i]]++;
		}
		b[a[n]]=n;
	}
	for(int i=1;i<=n;i++){
		int f=0;
		for(int j=i;j<=n;j++){
			c[a[j]]++;
		}
		for(int j=1;j<=n;j++){
			if(c[j]>1){
				f=1;
			}
		}
		if(f==0){
			for(int j=1;j<=n;j++){
				if(j==a[n]){
					b[j]+=0;
				}
				else{
					if(j==a[i]){
						b[j]+=0;
					}
					else if(c[j]==1){
						b[j]+=1;
					}
				}
			}
		}
		for(int i=1;i<=n;i++){
			c[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
