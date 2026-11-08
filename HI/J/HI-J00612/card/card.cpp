#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		int o=0;
		for(int j=1;j<=n;j++)b[i]=a[i];	
		int k=i; 
		for(int y=i;y<=n;y++){
			for(int j=1;j<=n;j++){
				if (a[j]==a[k]){
					for(int x=j;x<=n;x++)b[i]=0;
				}
			}
			int sum=0;
			for(int j=1;;j++){
				if (b[j]==0){
					sum=j;
					break;
				}
			}
			b[sum]=a[k];
			k++;
			o=sum;
		}
		for(int y=1;y<=o;y++)c[b[y]]++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}
