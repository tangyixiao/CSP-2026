#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[5000005];
int b[5000005];
int c[3000005];
void cad(int x){
	for(int i=1;i<=n-x;i++){
	  b[i]=a[i+x];
	}
	for(int i=1;i<=n-x;i++){
		bool f=0;
		for(int j=i+1;j<=n-x;j++){
			if(b[i]==b[j]){
				f=1;
				for(int l=i;l<j;l++){
					b[l]=0;
				}
			}
			if(f) break;
		}
	}
	for(int i=1;i<=n-x;i++){
		if(b[i]!=0){
			c[b[i]]++;
		}
	}
	return ;
}
int main(){

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cad(i);
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
	return 0;
}

