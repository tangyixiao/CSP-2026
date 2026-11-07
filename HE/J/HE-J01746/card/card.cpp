#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],o[500005];
int main() {
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int j=1; j<=m; j++) {
		for(int i=1; i<=n; i++) {
			for(int k=1; k<=n; i++) {
				if(a[k]==a[i]){
					for(int h=i;h<k;h++)a[h]=0;
					for(int d=1;d<=n;d++)if(a[d]!=0)o[d]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<o[i];
	} 
	return 0;
}
