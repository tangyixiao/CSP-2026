#include<bits/stdc++.h>
using namespace std;
int a[500001];
int c[500001];
int d[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[j-i+1]=a[j];
			for(int k=1;k<=j-i;k++){
				if(c[k]==c[j-i+1]){
					for(int h=k+1;h<=j-i+1;h++)c[h]=0;		
				}
			}
		}
		for(int j=1;j<=n-i+1;j++){
			d[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<d[i]<<" ";
	return 0;
}
