#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10000000];
int b[10000000];
int c[10000000];
int d[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		int m=1;
		for(int j=i;j<=n;j++){
			
			for(int x=1;x<=n;x++){
				if(c[x]==b[j]){
					for(int v=x;v<=n;v++){
						c[v]=0;
					}
				}
				
			}
			c[m]=b[j];
			m++;
			
		}
		for(int i=1;i<=n;i++){
			if(c[i]!=0)d[c[i]]++,c[i]=0;
			b[i]=a[i];
		}
	}
	for(int i=1;i<=m;i++){
			cout<<d[i]<<" ";
		}
		
} 

