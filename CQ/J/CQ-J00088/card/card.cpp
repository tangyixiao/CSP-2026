#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],b[500001],c[500001],sum[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int r;
	for(int i=1;i<=n;i++){
		r=1;
		for(int j=i;j<=n;j++){
			b[r]=a[j];
			r++;
		}
		for(int j=1;j<=n; ){
			for(int k=j+1;k<=n;k++){
				if(b[j]==b[k]){
					for(int l=j;l<k;l++){
						b[l]=0;
						j=k;
						continue;
					}
				}
			}
			j++;
		}
		for(int j=1;j<=n;j++){
			sum[a[j]]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i];
	}
	return 0;
}
