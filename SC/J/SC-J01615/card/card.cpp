#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[300005],d[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){ 
		for(int j=i;j<=n;j++){
			b[j]=a[j]; 
			c[b[j]]++; 
			for(int x=i;x<j;x++){
				if(b[j]==b[x]){ 
					for(int y=x;y<j;y++){
						c[b[y]]--; 
					}
				}
			}
		}
		for(int j=1;j<=m;i++){
			if(c[j]!=0) d[j]++; 
			c[j]=0; 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<' '; 
	}
	return 0; 
}
