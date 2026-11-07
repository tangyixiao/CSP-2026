#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],c=1,d[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[c]=a[i];
		for(int j=i+1;j<=n;j++){
			for(int k=1;k<c;k++){
				if(b[k]==b[c]){
					for(int l=k+1;l<=c;l++){
						b[l]=0;
					}
					c=k;
				}
			}
			c++;
			b[c]=a[j];
			for(int k=1;k<c;k++){
				if(b[k]==b[c]){
					for(int l=k+1;l<=c;l++){
						b[l]=0;
					}
					c=k;
				}
			}
		}
		for(int j=1;j<=n;j++){ 
			d[b[j]]+=1;
			b[j]=0;
		}
		c=1;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
